#include "phonebook.h"
#include "ui_phonebook.h"

PhoneBook::PhoneBook(QWidget *parent): QMainWindow(parent), ui(new Ui::PhoneBook) { ui->setupUi(this); }

PhoneBook::PhoneBook(str &fullname, str &phone1, str &phone2, str &gmail) {
    this->fullname = fullname;
    this->phone1 = phone1;
    this->phone2 = phone2;
    this->gmail = gmail;
}

PhoneBook::~PhoneBook() {
    for (PhoneBook *item : contacts)
        delete item;

    delete ui;
}

void PhoneBook::setFullName(str newName) { fullname = newName;  }
void PhoneBook::setPhone1(str newPhone) { phone1 = newPhone; }
void PhoneBook::setPhone2(str newPhone) { phone2 = newPhone; }
void PhoneBook::setGmail(str newGmail) { gmail = newGmail; }

void PhoneBook::setIconAndTitle(PhoneBook &w) {
    w.setWindowTitle("WHI3PER::PhoneBook");
    w.setWindowIcon(QIcon("img\\WHI3PER.ico"));
}

str PhoneBook::getFullName() const { return fullname; }
str PhoneBook::getPhone1() const { return phone1; }
str PhoneBook::getPhone2() const { return phone2; }
str PhoneBook::getGmail() const { return gmail; }

void PhoneBook::writeContactsInFile() {
    QChar dash{ '-' };
    QChar endl{ '\n' };

    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream output{ &file };

        for (PhoneBook *item : contacts) {
            output << item->getFullName() << dash;
            output << item->getPhone1() << dash;
            output << item->getPhone2() << dash;
            output << item->getGmail() << endl;
        }
    }

    else
        ui->LOG->append("The file is not opened.");

    file.close();
}

void PhoneBook::readContactsFromFile() {
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream input{ &file };

        while (!input.atEnd()) {
            QString line{ input.readLine() };
            QStringList fields{ line.split('-') };

            if (fields.size() >= 4) {
                PhoneBook contact{};

                contact.setFullName(fields.at(0));
                contact.setPhone1(fields.at(1));
                contact.setPhone2(fields.at(2));
                contact.setGmail(fields.at(3));

                contacts.push_back(new PhoneBook(contact.fullname, contact.phone1, contact.phone2, contact.gmail));
            }
        }
    }

    else
        ui->LOG->append("The file is not opened.");

    file.close();
}

void PhoneBook::sortContacts() {
    std::sort(contacts.begin(), contacts.end(), [](const PhoneBook *c1, const PhoneBook *c2) {
        return c1->getFullName() < c2->getFullName();
    });
}

void PhoneBook::showError(str message) {
    ui->LOG->clear();
    ui->LOG->append(message);
}

void PhoneBook::on_ABOUT_triggered() {}

void PhoneBook::on_ADD_BUTTON_clicked() {
    ui->LOG->clear();

    if (!ui->NAME->text().isEmpty() and !ui->PHONE1->text().isEmpty()) {
        fullname = ui->NAME->text();
        phone1 = ui->PHONE1->text();
        phone2 = ui->PHONE2->text().isEmpty() ? "Undefined" : ui->PHONE2->text();
        gmail = ui->GMAIL->text().isEmpty() ? "Undefined" : ui->GMAIL->text();

        contacts.push_back(new PhoneBook(fullname, phone1, phone2, gmail));
        ui->LOG->append("Contact added successfully!");
    }

    else
        ui->LOG->append("Please enter the name and phone number.");

    ui->NAME->clear();
    ui->PHONE1->clear();
    ui->PHONE2->clear();
    ui->GMAIL->clear();
}

void PhoneBook::on_REMOVE_BUTTON_clicked() {
    ui->LOG->clear();
    auto flag{ false };

    for (PhoneBook *item : contacts) {
        if (item->getFullName() == ui->SEARCH1->text()) {
            flag = true;
            auto const iter{ std::remove(contacts.begin(), contacts.end(), item) };
            contacts.erase(iter, contacts.end());
            break;
        }
    }

    flag ? ui->LOG->append("Contact " + ui->SEARCH1->text() + " deleted successfully.") : ui->LOG->append("Contact " + ui->SEARCH1->text() + " not found.");

    ui->SEARCH1->clear();
}

void PhoneBook::on_EDIT_BUTTON_clicked() {
    ui->LOG->clear();
    auto flag{ false };

    for (PhoneBook *item : contacts) {
        if (item->getFullName() == ui->SEARCH2->text()) {
            flag = true;

            if (!ui->NEW_NAME->text().isEmpty())
                item->setFullName(ui->NEW_NAME->text());
            if (!ui->NEW_PHONE1->text().isEmpty())
                item->setPhone1(ui->NEW_PHONE1->text());
            if (!ui->NEW_PHONE2->text().isEmpty())
                item->setPhone2(ui->NEW_PHONE2->text());
            if (!ui->NEW_GMAIL->text().isEmpty())
                item->setGmail(ui->NEW_GMAIL->text());

            break;
        }
    }

    flag ? ui->LOG->append("Contact " + ui->SEARCH2->text() + " updated successfully.") : ui->LOG->append("Contact " + ui->SEARCH2->text() + " not found.");

    ui->SEARCH2->clear();
    ui->NEW_NAME->clear();
    ui->NEW_PHONE1->clear();
    ui->NEW_PHONE2->clear();
    ui->NEW_GMAIL->clear();
}

void PhoneBook::on_SHOW_ALL_clicked() {
    ui->LOG->clear();

    if (!contacts.isEmpty()) {
        sortContacts();
        for (PhoneBook const *item : contacts) {
            ui->LOG->append("Name : " + item->getFullName());
            ui->LOG->append("Phone: " + item->getPhone1());
            ui->LOG->append("Phone: " + item->getPhone2());
            ui->LOG->append("Gmail: " + item->getGmail());

            ui->LOG->append("\n================================\n");
        }
    }
    else
        ui->LOG->append("Contact list is empty.");
}

void PhoneBook::on_SHOW_NAMES_clicked() {
    ui->LOG->clear();

    if (!contacts.isEmpty()) {
        sortContacts();
        for (PhoneBook const *item : contacts) {
            ui->LOG->append("Name: " + item->getFullName());
            ui->LOG->append("\n================================\n");
        }
    }
    else
        ui->LOG->append("Contact list is empty.");
}

void PhoneBook::on_SHOW_PHONES_clicked() {
    ui->LOG->clear();

    if (!contacts.isEmpty()) {
        sortContacts();
        for (PhoneBook const *item : contacts) {
            ui->LOG->append("Phone: " + item->getPhone1());
            ui->LOG->append("Phone: " + item->getPhone2());
            ui->LOG->append("\n================================\n");
        }
    }
    else
        ui->LOG->append("Contact list is empty.");
}

void PhoneBook::on_SHOW_GMAILS_clicked() {
    ui->LOG->clear();

    if (!contacts.isEmpty()) {
        sortContacts();
        for (PhoneBook const *item : contacts) {
            ui->LOG->append("Gmail: " + item->getGmail());
            ui->LOG->append("\n================================\n");
        }
    }
    else
        ui->LOG->append("Contact list is empty.");
}

void PhoneBook::on_SEARCH_BUTTON_clicked() {
    ui->LOG->clear();
    auto flag{ false };

    for (PhoneBook const *item : contacts) {
        if (item->getFullName() == ui->SEARCH3->text()) {
            ui->LOG->append("The contact was found.\n");
            flag = true;

            ui->LOG->append("Name : " + item->getFullName());
            ui->LOG->append("Phone: " + item->getPhone1());
            ui->LOG->append("Phone: " + item->getPhone2());
            ui->LOG->append("Gmail: " + item->getGmail());

            break;
        }
    }

    if (!flag)
        ui->LOG->append("Contact not found.");

    ui->SEARCH3->clear();
}

void PhoneBook::on_pushButton_clicked() {
    writeContactsInFile();
    QApplication::exit();
}
