/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed 18. Dec 01:59:44 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLabel *Lusername_2;
    QLineEdit *Lusername;
    QLabel *Lpassword_2;
    QLineEdit *Lpassword;
    QToolButton *login;
    QLabel *A;
    QCheckBox *APassword;
    QPushButton *quitterPB;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(640, 480);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(290, 120, 331, 231));
        Lusername_2 = new QLabel(groupBox);
        Lusername_2->setObjectName(QString::fromUtf8("Lusername_2"));
        Lusername_2->setGeometry(QRect(10, 70, 91, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Tahoma"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        Lusername_2->setFont(font);
        Lusername = new QLineEdit(groupBox);
        Lusername->setObjectName(QString::fromUtf8("Lusername"));
        Lusername->setGeometry(QRect(130, 70, 113, 20));
        Lpassword_2 = new QLabel(groupBox);
        Lpassword_2->setObjectName(QString::fromUtf8("Lpassword_2"));
        Lpassword_2->setGeometry(QRect(10, 130, 81, 16));
        Lpassword_2->setFont(font);
        Lpassword = new QLineEdit(groupBox);
        Lpassword->setObjectName(QString::fromUtf8("Lpassword"));
        Lpassword->setGeometry(QRect(130, 130, 113, 20));
        Lpassword->setEchoMode(QLineEdit::Password);
        login = new QToolButton(groupBox);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(240, 160, 81, 21));
        A = new QLabel(groupBox);
        A->setObjectName(QString::fromUtf8("A"));
        A->setGeometry(QRect(10, 180, 221, 41));
        APassword = new QCheckBox(groupBox);
        APassword->setObjectName(QString::fromUtf8("APassword"));
        APassword->setGeometry(QRect(130, 150, 111, 31));
        QFont font1;
        font1.setPointSize(6);
        APassword->setFont(font1);
        quitterPB = new QPushButton(groupBox);
        quitterPB->setObjectName(QString::fromUtf8("quitterPB"));
        quitterPB->setGeometry(QRect(240, 190, 81, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 640, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Authendification", 0, QApplication::UnicodeUTF8));
        Lusername_2->setText(QApplication::translate("MainWindow", "Username", 0, QApplication::UnicodeUTF8));
        Lpassword_2->setText(QApplication::translate("MainWindow", "Password", 0, QApplication::UnicodeUTF8));
        login->setText(QApplication::translate("MainWindow", "s'identifier", 0, QApplication::UnicodeUTF8));
        A->setText(QString());
        APassword->setText(QApplication::translate("MainWindow", "Affciher Password", 0, QApplication::UnicodeUTF8));
        quitterPB->setText(QApplication::translate("MainWindow", "quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
