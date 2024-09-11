from PyQt5.QtWidgets import QMainWindow, QApplication
from PyQt5.uic import loadUi
from PyQt5 import QtGui
from sys import argv
from os import getcwd

import sqlite3

class PhoneBook(QMainWindow):
    def __init__(self):
        self.data = sqlite3.connect('db\\PhoneBook.db')
        self.cursor = self.data.cursor()
        super(PhoneBook, self).__init__()
        loadUi('UI\\phonebook.ui', self)

        self.setWindowIcon(QtGui.QIcon(getcwd() + '\\img\\WHI3PER.ico'))

        # ========================================================== #

        self.ADD_BUTTON.clicked.connect(self.add_contact)
        self.REMOVE_BUTTON.clicked.connect(self.remove_contact)
        self.EDIT_BUTTON.clicked.connect(self.edit_contact)
        self.SHOW_ALL.clicked.connect(self.show_all)
        self.SHOW_NAMES.clicked.connect(self.show_names)
        self.SHOW_PHONES.clicked.connect(self.show_phones)
        self.SHOW_GMAILS.clicked.connect(self.show_gmails)
        self.SEARCH_BUTTON.clicked.connect(self.search_contact)
        self.EXIT.clicked.connect(self.exit_program)

    # ============================================================================================== #

    def create_table(self):
        self.cursor.execute('CREATE TABLE IF NOT EXISTS contacts (Name TEXT, Phone1 TEXT, Phone2 TEXT, Gmail TEXT)')

    # ============================================================================================== #

    def add_contact(self):
        if len(self.NAME.text().strip()) != 0 and len(self.PHONE1.text().strip()) != 0:
            self.LOG.clear()

            name = self.NAME.text()
            phone1 = self.PHONE1.text()
            phone2 = self.PHONE2.text() if len(self.PHONE2.text()) != 0 else "Undefined"
            gmail = self.GMAIL.text() if len(self.GMAIL.text()) != 0 else "Undefined"

            self.create_table
            self.cursor.execute('INSERT INTO contacts (Name, Phone1, Phone2, Gmail) VALUES(?, ?, ?, ?)', (name, phone1, phone2, gmail))
            self.data.commit()

            self.LOG.append('Contact added successfully!')

            self.NAME.clear()
            self.PHONE1.clear()
            self.PHONE2.clear()
            self.GMAIL.clear()

        else:
            self.LOG.append('Please enter the name and phone number.')

    # ============================================================================================== #

    def remove_contact(self):
        try:
            self.LOG.clear()
            if self.SEARCH1.text() == '*':
                self.cursor.execute('DELETE FROM contacts;')
                self.LOG.append(f'{self.cursor.rowcount} users deleted.')
            
            else:
                self.cursor.execute('DELETE FROM contacts WHERE Name = ?', (self.SEARCH1.text(),))
                if self.cursor.rowcount:
                    self.LOG.append(f'Contact {self.SEARCH1.text()} deleted successfully.')
                    self.SEARCH1.clear()
                else:
                    self.LOG.append(f'Contact {self.SEARCH1.text()} not found.')
            
            self.data.commit()
            self.SEARCH1.clear()

        except sqlite3.Error as err:
            self.LOG.append(f'Error deleting contact: {err}')

    # ============================================================================================== #

    def edit_contact(self):
        try:
            self.LOG.clear()

            self.cursor.execute('SELECT * FROM contacts WHERE Name = ?', (self.SEARCH2.text(),))
            results = self.cursor.fetchall()
            
            if results:
                name = results[0][0] if len(self.NEW_NAME.text().strip()) == 0 else self.NEW_NAME.text()
                phone1 = results[0][1] if len(self.NEW_PHONE1.text().strip()) == 0 else self.NEW_PHONE1.text()
                phone2 = results[0][2] if len(self.NEW_PHONE2.text().strip()) == 0 else self.NEW_PHONE2.text()
                gmail = results[0][3] if len(self.NEW_GMAIL.text().strip()) == 0 else self.NEW_GMAIL.text()

            self.cursor.execute(f'UPDATE contacts SET Name = ?, Phone1 = ?, Phone2 = ?, Gmail = ? WHERE Name = ?', 
                           (name, phone1, phone2, gmail, self.SEARCH2.text()))
            
            if self.cursor.rowcount:
                self.LOG.append(f'Contact {self.SEARCH2.text()} updated successfully.')

                self.NEW_NAME.clear()
                self.NEW_PHONE1.clear()
                self.NEW_PHONE2.clear()
                self.NEW_GMAIL.clear()
            else:
                self.LOG.append(f'Contact {self.SEARCH2.text()} not found.')
            
            self.data.commit()
            self.SEARCH2.clear();
            self.NEW_NAME.clear();
            self.NEW_PHONE1.clear();
            self.NEW_PHONE2.clear();
            self.NEW_GMAIL.clear();

        except sqlite3.Error as err:
            self.LOGS.append(f"Error: {err}")

    # ============================================================================================== #

    def show_all(self):
        try:
            self.LOG.clear()
            self.cursor.execute('SELECT * FROM contacts ORDER BY Name;')
            rows = self.cursor.fetchall()

            if rows:
                for (name, phone1, phone2, gmail) in rows:
                    self.LOG.append(f'Name : {name}\nPhone: {phone1}\nPhone: {phone2}\nGmail: {gmail}')
                    self.LOG.append('\n================================\n')
            else:
                self.LOG.append('Contact list is empty.')

        except sqlite3.Error as err:
            self.LOG.append(f"Error: {err}")

    # ============================================================================================== #

    def show_names(self):
        try:
            self.LOG.clear()
            self.cursor.execute('SELECT * FROM contacts ORDER BY Name;')
            rows = self.cursor.fetchall()

            if rows:
                for item in rows:
                    self.LOG.append(f'Name: {item[0]}')
                    self.LOG.append('\n================================\n')
            else:
                self.LOG.append('Contact list is empty.')

        except sqlite3.Error as err:
            self.LOG.append(f"Error: {err}")

    # ============================================================================================== #

    def show_phones(self):
        try:
            self.LOG.clear()
            self.cursor.execute('SELECT * FROM contacts ORDER BY Name;')
            rows = self.cursor.fetchall()

            if rows:
                for item in rows:
                    self.LOG.append(f'Phone: {item[1]}\nPhone: {item[2]}')
                    self.LOG.append('\n================================\n')
            else:
                self.LOG.append('Contact list is empty.')

        except sqlite3.Error as err:
            self.LOG.append(f"Error: {err}")

    # ============================================================================================== #

    def show_gmails(self):
        try:
            self.LOG.clear()
            self.cursor.execute('SELECT * FROM contacts ORDER BY Name;')
            rows = self.cursor.fetchall()

            if rows:
                for item in rows:
                    self.LOG.append(f'Gmail: {item[3]}')
                    self.LOG.append('\n================================\n')
            else:
                self.LOG.append('Contact list is empty.')

        except sqlite3.Error as err:
            self.LOG.append(f"Error: {err}")

    # ============================================================================================== #

    def search_contact(self):
        try:
            self.LOG.clear()
            self.cursor.execute('SELECT * FROM contacts WHERE Name = ?', (self.SEARCH3.text(),))
            results = self.cursor.fetchall()
            
            if results:
                self.LOG.append('The contact was found.\n')
                for (name, phone1, phone2, gmail) in results:
                    self.LOG.append(f'Name : {name}\nPhone: {phone1}\nPhone: {phone2}\nGmail: {gmail}')
                    self.LOG.append('\n================================\n')
                
                self.SEARCH3.clear()

            else:
                self.LOG.append('Contact not found.')
        
        except sqlite3.Error as err:
            self.LOG.append(f"Error: {err}")

    # ============================================================================================== #

    def exit_program(self):
        exit()

    # ============================================================================================== #
