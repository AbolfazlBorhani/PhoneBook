/********************************************************************************
** Form generated from reading UI file 'phonebook.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHONEBOOK_H
#define UI_PHONEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PhoneBook
{
public:
    QAction *ABOUT;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QLineEdit *NAME;
    QGroupBox *groupBox_2;
    QLineEdit *PHONE1;
    QLineEdit *PHONE2;
    QGroupBox *groupBox_3;
    QLineEdit *GMAIL;
    QPushButton *ADD_BUTTON;
    QWidget *tab_2;
    QGroupBox *groupBox_5;
    QLineEdit *SEARCH1;
    QPushButton *REMOVE_BUTTON;
    QWidget *tab_3;
    QGroupBox *groupBox_7;
    QLineEdit *SEARCH2;
    QGroupBox *groupBox_8;
    QLineEdit *NEW_NAME;
    QGroupBox *groupBox_9;
    QLineEdit *NEW_PHONE1;
    QLineEdit *NEW_PHONE2;
    QGroupBox *groupBox_10;
    QLineEdit *NEW_GMAIL;
    QPushButton *EDIT_BUTTON;
    QWidget *tab_4;
    QPushButton *SHOW_ALL;
    QPushButton *SHOW_NAMES;
    QPushButton *SHOW_PHONES;
    QPushButton *SHOW_GMAILS;
    QWidget *tab_5;
    QGroupBox *groupBox_6;
    QLineEdit *SEARCH3;
    QPushButton *SEARCH_BUTTON;
    QGroupBox *groupBox_4;
    QTextBrowser *LOG;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PhoneBook)
    {
        if (PhoneBook->objectName().isEmpty())
            PhoneBook->setObjectName(QString::fromUtf8("PhoneBook"));
        PhoneBook->resize(679, 502);
        PhoneBook->setStyleSheet(QString::fromUtf8("QWidget {  \n"
"	font: 11pt \"Comic Sans MS\";\n"
"     background-color: rgb(25, 25, 25);\n"
"	color: rgb(255, 255, 0);\n"
"}\n"
"\n"
"QGroupBox {  color: rgb(85, 255, 127); }\n"
"QPushButton { background-color: rgb(55, 55, 55); }\n"
"QComboBox {  background-color: rgb(55, 55, 55);  color: rgb(85, 255, 127); }\n"
"QTextBrowser { background-color: rgb(50, 50, 50);  color: rgb(0, 255, 255); }\n"
"QMenuBar { color: rgb(85, 255, 127); }\n"
"QTabBar::tab { background-color: rgb(55, 55, 55); }\n"
"QLineEdit { background-color: rgb(50, 50, 50); }"));
        ABOUT = new QAction(PhoneBook);
        ABOUT->setObjectName(QString::fromUtf8("ABOUT"));
        centralwidget = new QWidget(PhoneBook);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 306, 421));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 261, 61));
        NAME = new QLineEdit(groupBox);
        NAME->setObjectName(QString::fromUtf8("NAME"));
        NAME->setGeometry(QRect(10, 20, 241, 31));
        NAME->setAlignment(Qt::AlignCenter);
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 100, 261, 101));
        PHONE1 = new QLineEdit(groupBox_2);
        PHONE1->setObjectName(QString::fromUtf8("PHONE1"));
        PHONE1->setGeometry(QRect(10, 20, 241, 31));
        PHONE1->setAlignment(Qt::AlignCenter);
        PHONE2 = new QLineEdit(groupBox_2);
        PHONE2->setObjectName(QString::fromUtf8("PHONE2"));
        PHONE2->setGeometry(QRect(10, 60, 241, 31));
        PHONE2->setAlignment(Qt::AlignCenter);
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 220, 261, 61));
        GMAIL = new QLineEdit(groupBox_3);
        GMAIL->setObjectName(QString::fromUtf8("GMAIL"));
        GMAIL->setGeometry(QRect(10, 20, 241, 31));
        GMAIL->setAlignment(Qt::AlignCenter);
        ADD_BUTTON = new QPushButton(tab);
        ADD_BUTTON->setObjectName(QString::fromUtf8("ADD_BUTTON"));
        ADD_BUTTON->setGeometry(QRect(19, 340, 261, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(20, 20, 261, 61));
        SEARCH1 = new QLineEdit(groupBox_5);
        SEARCH1->setObjectName(QString::fromUtf8("SEARCH1"));
        SEARCH1->setGeometry(QRect(10, 20, 241, 31));
        SEARCH1->setAlignment(Qt::AlignCenter);
        REMOVE_BUTTON = new QPushButton(tab_2);
        REMOVE_BUTTON->setObjectName(QString::fromUtf8("REMOVE_BUTTON"));
        REMOVE_BUTTON->setGeometry(QRect(20, 340, 261, 31));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        groupBox_7 = new QGroupBox(tab_3);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(20, 10, 261, 61));
        SEARCH2 = new QLineEdit(groupBox_7);
        SEARCH2->setObjectName(QString::fromUtf8("SEARCH2"));
        SEARCH2->setGeometry(QRect(10, 20, 241, 31));
        SEARCH2->setAlignment(Qt::AlignCenter);
        groupBox_8 = new QGroupBox(tab_3);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(20, 80, 261, 61));
        NEW_NAME = new QLineEdit(groupBox_8);
        NEW_NAME->setObjectName(QString::fromUtf8("NEW_NAME"));
        NEW_NAME->setGeometry(QRect(10, 20, 241, 31));
        NEW_NAME->setAlignment(Qt::AlignCenter);
        groupBox_9 = new QGroupBox(tab_3);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(20, 150, 261, 101));
        NEW_PHONE1 = new QLineEdit(groupBox_9);
        NEW_PHONE1->setObjectName(QString::fromUtf8("NEW_PHONE1"));
        NEW_PHONE1->setGeometry(QRect(10, 20, 241, 31));
        NEW_PHONE1->setAlignment(Qt::AlignCenter);
        NEW_PHONE2 = new QLineEdit(groupBox_9);
        NEW_PHONE2->setObjectName(QString::fromUtf8("NEW_PHONE2"));
        NEW_PHONE2->setGeometry(QRect(10, 60, 241, 31));
        NEW_PHONE2->setAlignment(Qt::AlignCenter);
        groupBox_10 = new QGroupBox(tab_3);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(20, 260, 261, 61));
        NEW_GMAIL = new QLineEdit(groupBox_10);
        NEW_GMAIL->setObjectName(QString::fromUtf8("NEW_GMAIL"));
        NEW_GMAIL->setGeometry(QRect(10, 20, 241, 31));
        NEW_GMAIL->setAlignment(Qt::AlignCenter);
        EDIT_BUTTON = new QPushButton(tab_3);
        EDIT_BUTTON->setObjectName(QString::fromUtf8("EDIT_BUTTON"));
        EDIT_BUTTON->setGeometry(QRect(20, 340, 261, 31));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        SHOW_ALL = new QPushButton(tab_4);
        SHOW_ALL->setObjectName(QString::fromUtf8("SHOW_ALL"));
        SHOW_ALL->setGeometry(QRect(20, 20, 261, 31));
        SHOW_NAMES = new QPushButton(tab_4);
        SHOW_NAMES->setObjectName(QString::fromUtf8("SHOW_NAMES"));
        SHOW_NAMES->setGeometry(QRect(20, 70, 261, 31));
        SHOW_PHONES = new QPushButton(tab_4);
        SHOW_PHONES->setObjectName(QString::fromUtf8("SHOW_PHONES"));
        SHOW_PHONES->setGeometry(QRect(20, 120, 261, 31));
        SHOW_GMAILS = new QPushButton(tab_4);
        SHOW_GMAILS->setObjectName(QString::fromUtf8("SHOW_GMAILS"));
        SHOW_GMAILS->setGeometry(QRect(20, 170, 261, 31));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        groupBox_6 = new QGroupBox(tab_5);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(20, 20, 261, 61));
        SEARCH3 = new QLineEdit(groupBox_6);
        SEARCH3->setObjectName(QString::fromUtf8("SEARCH3"));
        SEARCH3->setGeometry(QRect(10, 20, 241, 31));
        SEARCH3->setAlignment(Qt::AlignCenter);
        SEARCH_BUTTON = new QPushButton(tab_5);
        SEARCH_BUTTON->setObjectName(QString::fromUtf8("SEARCH_BUTTON"));
        SEARCH_BUTTON->setGeometry(QRect(20, 340, 261, 31));
        tabWidget->addTab(tab_5, QString());
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(349, 10, 306, 431));
        LOG = new QTextBrowser(groupBox_4);
        LOG->setObjectName(QString::fromUtf8("LOG"));
        LOG->setGeometry(QRect(11, 20, 286, 400));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(570, 450, 86, 31));
        PhoneBook->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PhoneBook);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 679, 25));
        PhoneBook->setMenuBar(menubar);
        statusbar = new QStatusBar(PhoneBook);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PhoneBook->setStatusBar(statusbar);

        retranslateUi(PhoneBook);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(PhoneBook);
    } // setupUi

    void retranslateUi(QMainWindow *PhoneBook)
    {
        PhoneBook->setWindowTitle(QCoreApplication::translate("PhoneBook", "PhoneBook", nullptr));
        ABOUT->setText(QCoreApplication::translate("PhoneBook", "About", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PhoneBook", "Name", nullptr));
        NAME->setInputMask(QString());
        NAME->setText(QString());
        NAME->setPlaceholderText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("PhoneBook", "Phone's", nullptr));
        PHONE1->setPlaceholderText(QCoreApplication::translate("PhoneBook", "XXXX XXX XXXX", nullptr));
        PHONE2->setPlaceholderText(QCoreApplication::translate("PhoneBook", "XXXX XXX XXXX", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("PhoneBook", "Gamil", nullptr));
        ADD_BUTTON->setText(QCoreApplication::translate("PhoneBook", "Add Contact", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("PhoneBook", "Add", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("PhoneBook", "Name", nullptr));
        SEARCH1->setInputMask(QString());
        SEARCH1->setText(QString());
        SEARCH1->setPlaceholderText(QCoreApplication::translate("PhoneBook", "Enter a name for remove", nullptr));
        REMOVE_BUTTON->setText(QCoreApplication::translate("PhoneBook", "Remove Contact", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("PhoneBook", "Remove", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("PhoneBook", "Name", nullptr));
        SEARCH2->setInputMask(QString());
        SEARCH2->setText(QString());
        SEARCH2->setPlaceholderText(QCoreApplication::translate("PhoneBook", "Enter a name for search", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("PhoneBook", "New Name", nullptr));
        NEW_NAME->setInputMask(QString());
        NEW_NAME->setText(QString());
        NEW_NAME->setPlaceholderText(QString());
        groupBox_9->setTitle(QCoreApplication::translate("PhoneBook", "New Phone's", nullptr));
        NEW_PHONE1->setPlaceholderText(QCoreApplication::translate("PhoneBook", "XXXX XXX XXXX", nullptr));
        NEW_PHONE2->setPlaceholderText(QCoreApplication::translate("PhoneBook", "XXXX XXX XXXX", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("PhoneBook", "New Gamil", nullptr));
        EDIT_BUTTON->setText(QCoreApplication::translate("PhoneBook", "Edit Contact", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("PhoneBook", "Edit", nullptr));
        SHOW_ALL->setText(QCoreApplication::translate("PhoneBook", "Show All Contact's", nullptr));
        SHOW_NAMES->setText(QCoreApplication::translate("PhoneBook", "Show All Name's", nullptr));
        SHOW_PHONES->setText(QCoreApplication::translate("PhoneBook", "Show All Phone's", nullptr));
        SHOW_GMAILS->setText(QCoreApplication::translate("PhoneBook", "Show All Gamil's", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("PhoneBook", "List", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("PhoneBook", "Name", nullptr));
        SEARCH3->setInputMask(QString());
        SEARCH3->setText(QString());
        SEARCH3->setPlaceholderText(QCoreApplication::translate("PhoneBook", "Enter a name for search", nullptr));
        SEARCH_BUTTON->setText(QCoreApplication::translate("PhoneBook", "Search Contact", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("PhoneBook", "Search", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("PhoneBook", "Log", nullptr));
        pushButton->setText(QCoreApplication::translate("PhoneBook", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PhoneBook: public Ui_PhoneBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONEBOOK_H
