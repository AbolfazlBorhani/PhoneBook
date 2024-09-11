from PyQt5.QtWidgets import QMainWindow, QApplication
import sys
import os

includePath = os.path.abspath(os.getcwd() + '\\lib')
sys.path.append(includePath)

from PB import PhoneBook

if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = PhoneBook()
    window.show()
    app.exec_()
