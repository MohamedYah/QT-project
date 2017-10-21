/********************************************************************************
** Form generated from reading UI file 'menuprincipale.ui'
**
** Created: Wed 18. Dec 01:59:44 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUPRINCIPALE_H
#define UI_MENUPRINCIPALE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_menuprincipale
{
public:
    QPushButton *quitterPB;
    QPushButton *precedentPB;
    QPushButton *stockPB;
    QPushButton *clientPB;
    QPushButton *financePB;
    QPushButton *afficherstockPB;
    QPushButton *ajouterstockPB;
    QPushButton *rechercherstockPB;
    QPushButton *supprimerstockPB;
    QPushButton *modifierstockPB;
    QPushButton *afficherclientPB;
    QPushButton *ajouterclientPB;
    QPushButton *rechercherclientPB;
    QPushButton *supprimerclientPB;
    QPushButton *modifierclientPB;
    QPushButton *afficherfinancePB;
    QPushButton *ajouterfinancePB;
    QPushButton *rechercherfinancePB;
    QPushButton *supprimerfinancePB;
    QPushButton *modifierfinancePB;

    void setupUi(QDialog *menuprincipale)
    {
        if (menuprincipale->objectName().isEmpty())
            menuprincipale->setObjectName(QString::fromUtf8("menuprincipale"));
        menuprincipale->resize(640, 480);
        quitterPB = new QPushButton(menuprincipale);
        quitterPB->setObjectName(QString::fromUtf8("quitterPB"));
        quitterPB->setGeometry(QRect(524, 380, 91, 31));
        precedentPB = new QPushButton(menuprincipale);
        precedentPB->setObjectName(QString::fromUtf8("precedentPB"));
        precedentPB->setGeometry(QRect(420, 380, 91, 31));
        stockPB = new QPushButton(menuprincipale);
        stockPB->setObjectName(QString::fromUtf8("stockPB"));
        stockPB->setGeometry(QRect(40, 30, 75, 23));
        clientPB = new QPushButton(menuprincipale);
        clientPB->setObjectName(QString::fromUtf8("clientPB"));
        clientPB->setGeometry(QRect(150, 30, 75, 23));
        financePB = new QPushButton(menuprincipale);
        financePB->setObjectName(QString::fromUtf8("financePB"));
        financePB->setGeometry(QRect(250, 30, 75, 23));
        afficherstockPB = new QPushButton(menuprincipale);
        afficherstockPB->setObjectName(QString::fromUtf8("afficherstockPB"));
        afficherstockPB->setGeometry(QRect(40, 70, 75, 31));
        ajouterstockPB = new QPushButton(menuprincipale);
        ajouterstockPB->setObjectName(QString::fromUtf8("ajouterstockPB"));
        ajouterstockPB->setGeometry(QRect(40, 110, 75, 31));
        rechercherstockPB = new QPushButton(menuprincipale);
        rechercherstockPB->setObjectName(QString::fromUtf8("rechercherstockPB"));
        rechercherstockPB->setGeometry(QRect(40, 150, 75, 31));
        supprimerstockPB = new QPushButton(menuprincipale);
        supprimerstockPB->setObjectName(QString::fromUtf8("supprimerstockPB"));
        supprimerstockPB->setGeometry(QRect(40, 190, 75, 31));
        modifierstockPB = new QPushButton(menuprincipale);
        modifierstockPB->setObjectName(QString::fromUtf8("modifierstockPB"));
        modifierstockPB->setGeometry(QRect(40, 230, 75, 31));
        afficherclientPB = new QPushButton(menuprincipale);
        afficherclientPB->setObjectName(QString::fromUtf8("afficherclientPB"));
        afficherclientPB->setGeometry(QRect(150, 70, 75, 31));
        ajouterclientPB = new QPushButton(menuprincipale);
        ajouterclientPB->setObjectName(QString::fromUtf8("ajouterclientPB"));
        ajouterclientPB->setGeometry(QRect(150, 110, 75, 31));
        rechercherclientPB = new QPushButton(menuprincipale);
        rechercherclientPB->setObjectName(QString::fromUtf8("rechercherclientPB"));
        rechercherclientPB->setGeometry(QRect(150, 150, 75, 31));
        supprimerclientPB = new QPushButton(menuprincipale);
        supprimerclientPB->setObjectName(QString::fromUtf8("supprimerclientPB"));
        supprimerclientPB->setGeometry(QRect(150, 190, 75, 31));
        modifierclientPB = new QPushButton(menuprincipale);
        modifierclientPB->setObjectName(QString::fromUtf8("modifierclientPB"));
        modifierclientPB->setGeometry(QRect(150, 230, 75, 31));
        afficherfinancePB = new QPushButton(menuprincipale);
        afficherfinancePB->setObjectName(QString::fromUtf8("afficherfinancePB"));
        afficherfinancePB->setGeometry(QRect(250, 70, 75, 31));
        ajouterfinancePB = new QPushButton(menuprincipale);
        ajouterfinancePB->setObjectName(QString::fromUtf8("ajouterfinancePB"));
        ajouterfinancePB->setGeometry(QRect(250, 110, 75, 31));
        rechercherfinancePB = new QPushButton(menuprincipale);
        rechercherfinancePB->setObjectName(QString::fromUtf8("rechercherfinancePB"));
        rechercherfinancePB->setGeometry(QRect(250, 150, 75, 31));
        supprimerfinancePB = new QPushButton(menuprincipale);
        supprimerfinancePB->setObjectName(QString::fromUtf8("supprimerfinancePB"));
        supprimerfinancePB->setGeometry(QRect(250, 190, 75, 31));
        modifierfinancePB = new QPushButton(menuprincipale);
        modifierfinancePB->setObjectName(QString::fromUtf8("modifierfinancePB"));
        modifierfinancePB->setGeometry(QRect(250, 230, 75, 31));

        retranslateUi(menuprincipale);

        QMetaObject::connectSlotsByName(menuprincipale);
    } // setupUi

    void retranslateUi(QDialog *menuprincipale)
    {
        menuprincipale->setWindowTitle(QApplication::translate("menuprincipale", "Dialog", 0, QApplication::UnicodeUTF8));
        quitterPB->setText(QApplication::translate("menuprincipale", "quitter", 0, QApplication::UnicodeUTF8));
        precedentPB->setText(QApplication::translate("menuprincipale", "precedent", 0, QApplication::UnicodeUTF8));
        stockPB->setText(QApplication::translate("menuprincipale", "stock", 0, QApplication::UnicodeUTF8));
        clientPB->setText(QApplication::translate("menuprincipale", "client", 0, QApplication::UnicodeUTF8));
        financePB->setText(QApplication::translate("menuprincipale", "finance", 0, QApplication::UnicodeUTF8));
        afficherstockPB->setText(QApplication::translate("menuprincipale", "AfficherS", 0, QApplication::UnicodeUTF8));
        ajouterstockPB->setText(QApplication::translate("menuprincipale", "AjouterS", 0, QApplication::UnicodeUTF8));
        rechercherstockPB->setText(QApplication::translate("menuprincipale", "RechercherS", 0, QApplication::UnicodeUTF8));
        supprimerstockPB->setText(QApplication::translate("menuprincipale", "SupprimerS", 0, QApplication::UnicodeUTF8));
        modifierstockPB->setText(QApplication::translate("menuprincipale", "ModifierS", 0, QApplication::UnicodeUTF8));
        afficherclientPB->setText(QApplication::translate("menuprincipale", "AfficherC", 0, QApplication::UnicodeUTF8));
        ajouterclientPB->setText(QApplication::translate("menuprincipale", "AjouterC", 0, QApplication::UnicodeUTF8));
        rechercherclientPB->setText(QApplication::translate("menuprincipale", "RechercherC", 0, QApplication::UnicodeUTF8));
        supprimerclientPB->setText(QApplication::translate("menuprincipale", "SupprimerC", 0, QApplication::UnicodeUTF8));
        modifierclientPB->setText(QApplication::translate("menuprincipale", "ModifierC", 0, QApplication::UnicodeUTF8));
        afficherfinancePB->setText(QApplication::translate("menuprincipale", "AfficherF", 0, QApplication::UnicodeUTF8));
        ajouterfinancePB->setText(QApplication::translate("menuprincipale", "AjouterF", 0, QApplication::UnicodeUTF8));
        rechercherfinancePB->setText(QApplication::translate("menuprincipale", "RechercherF", 0, QApplication::UnicodeUTF8));
        supprimerfinancePB->setText(QApplication::translate("menuprincipale", "SupprimerF", 0, QApplication::UnicodeUTF8));
        modifierfinancePB->setText(QApplication::translate("menuprincipale", "ModifierF", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class menuprincipale: public Ui_menuprincipale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUPRINCIPALE_H
