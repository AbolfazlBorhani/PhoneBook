#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <QMainWindow>
#include <QTextStream>
#include <QString>
#include <QVector>
#include <QFile>

#include <algorithm>

typedef QString str;

QT_BEGIN_NAMESPACE
namespace Ui { class PhoneBook; }
QT_END_NAMESPACE

class PhoneBook : public QMainWindow {

Q_OBJECT
public:
    PhoneBook(QWidget *parent = nullptr);
    PhoneBook(str&, str&, str&, str&);
    ~PhoneBook();

    void setFullName(str);
    void setPhone1(str);
    void setPhone2(str);
    void setGmail(str);
    void setIconAndTitle(PhoneBook &);

    str getFullName() const;
    str getPhone1() const;
    str getPhone2() const;
    str getGmail() const;

    void writeContactsInFile();
    void readContactsFromFile();

    void sortContacts();
    void showError(str);

private slots:
    void on_ABOUT_triggered();
    void on_ADD_BUTTON_clicked();
    void on_REMOVE_BUTTON_clicked();
    void on_EDIT_BUTTON_clicked();
    void on_SHOW_ALL_clicked();
    void on_SHOW_NAMES_clicked();
    void on_SHOW_PHONES_clicked();
    void on_SHOW_GMAILS_clicked();
    void on_SEARCH_BUTTON_clicked();
    void on_pushButton_clicked();

private:
    Ui::PhoneBook *ui{};

    QFile file{ "Contacts.txt" };

    str fullname{ "" };
    str phone1{ "" };
    str phone2{ "" };
    str gmail{ "" };

    QVector<PhoneBook *> contacts{};
};

#endif // PHONEBOOK_H
