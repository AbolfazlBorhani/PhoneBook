#include "phonebook.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    PhoneBook w{};

    w.readContactsFromFile();
    w.setIconAndTitle(w);
    w.show();

    return a.exec();
}
