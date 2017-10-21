/********************************************************************************
** Form generated from reading UI file 'Ajout.ui'
**
** Created: Thu 19. Dec 20:04:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUT_H
#define UI_AJOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QLineEdit *Lnom;
    QLineEdit *L_maillot;
    QLabel *label_7;
    QLabel *Duree_4;
    QLineEdit *Lcin;
    QToolButton *ajouter;
    QDateEdit *dateN;
    QLabel *label_2;
    QLineEdit *Lnum_tel;
    QLabel *label_16;
    QDateEdit *dateD;
    QLabel *Prenom_4;
    QLabel *Nom_4;
    QLabel *Date_4;
    QDateEdit *dateA;
    QLineEdit *Lage;
    QLabel *label_17;
    QLabel *label;
    QLabel *CIN_4;
    QLineEdit *Lprenom;
    QLineEdit *L_taille;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *L_poids;
    QLineEdit *ID_A;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *L_adresse;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(701, 540);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 681, 451));
        Lnom = new QLineEdit(groupBox);
        Lnom->setObjectName(QString::fromUtf8("Lnom"));
        Lnom->setGeometry(QRect(200, 70, 181, 20));
        L_maillot = new QLineEdit(groupBox);
        L_maillot->setObjectName(QString::fromUtf8("L_maillot"));
        L_maillot->setGeometry(QRect(510, 170, 113, 20));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(420, 170, 46, 13));
        Duree_4 = new QLabel(groupBox);
        Duree_4->setObjectName(QString::fromUtf8("Duree_4"));
        Duree_4->setGeometry(QRect(40, 270, 111, 16));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        Duree_4->setFont(font);
        Lcin = new QLineEdit(groupBox);
        Lcin->setObjectName(QString::fromUtf8("Lcin"));
        Lcin->setGeometry(QRect(200, 170, 181, 20));
        ajouter = new QToolButton(groupBox);
        ajouter->setObjectName(QString::fromUtf8("ajouter"));
        ajouter->setGeometry(QRect(540, 330, 81, 21));
        dateN = new QDateEdit(groupBox);
        dateN->setObjectName(QString::fromUtf8("dateN"));
        dateN->setGeometry(QRect(200, 220, 181, 22));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(420, 120, 46, 13));
        Lnum_tel = new QLineEdit(groupBox);
        Lnum_tel->setObjectName(QString::fromUtf8("Lnum_tel"));
        Lnum_tel->setGeometry(QRect(510, 70, 113, 20));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(310, 270, 21, 16));
        label_16->setFont(font);
        dateD = new QDateEdit(groupBox);
        dateD->setObjectName(QString::fromUtf8("dateD"));
        dateD->setGeometry(QRect(220, 270, 81, 22));
        Prenom_4 = new QLabel(groupBox);
        Prenom_4->setObjectName(QString::fromUtf8("Prenom_4"));
        Prenom_4->setGeometry(QRect(40, 130, 46, 13));
        Prenom_4->setFont(font);
        Nom_4 = new QLabel(groupBox);
        Nom_4->setObjectName(QString::fromUtf8("Nom_4"));
        Nom_4->setGeometry(QRect(40, 70, 71, 16));
        Nom_4->setFont(font);
        Date_4 = new QLabel(groupBox);
        Date_4->setObjectName(QString::fromUtf8("Date_4"));
        Date_4->setGeometry(QRect(40, 220, 121, 16));
        Date_4->setFont(font);
        dateA = new QDateEdit(groupBox);
        dateA->setObjectName(QString::fromUtf8("dateA"));
        dateA->setGeometry(QRect(330, 270, 81, 22));
        Lage = new QLineEdit(groupBox);
        Lage->setObjectName(QString::fromUtf8("Lage"));
        Lage->setGeometry(QRect(510, 120, 113, 20));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(200, 270, 21, 16));
        label_17->setFont(font);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(420, 70, 61, 21));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        CIN_4 = new QLabel(groupBox);
        CIN_4->setObjectName(QString::fromUtf8("CIN_4"));
        CIN_4->setGeometry(QRect(40, 180, 46, 13));
        CIN_4->setFont(font);
        Lprenom = new QLineEdit(groupBox);
        Lprenom->setObjectName(QString::fromUtf8("Lprenom"));
        Lprenom->setGeometry(QRect(200, 120, 181, 20));
        L_taille = new QLineEdit(groupBox);
        L_taille->setObjectName(QString::fromUtf8("L_taille"));
        L_taille->setGeometry(QRect(510, 220, 113, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(420, 220, 46, 13));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(440, 280, 46, 13));
        L_poids = new QLineEdit(groupBox);
        L_poids->setObjectName(QString::fromUtf8("L_poids"));
        L_poids->setGeometry(QRect(510, 280, 113, 20));
        ID_A = new QLineEdit(groupBox);
        ID_A->setObjectName(QString::fromUtf8("ID_A"));
        ID_A->setGeometry(QRect(280, 320, 113, 20));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(200, 330, 46, 13));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(180, 360, 46, 13));
        L_adresse = new QLineEdit(groupBox);
        L_adresse->setObjectName(QString::fromUtf8("L_adresse"));
        L_adresse->setGeometry(QRect(290, 360, 113, 20));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Dialog", "Formulaire Ajouter Joueur", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Dialog", "N_maillot", 0, QApplication::UnicodeUTF8));
        Duree_4->setText(QApplication::translate("Dialog", "Dur\303\251e de contrat ", 0, QApplication::UnicodeUTF8));
        ajouter->setText(QApplication::translate("Dialog", "Ajouter", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "AGE", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("Dialog", "Au", 0, QApplication::UnicodeUTF8));
        Prenom_4->setText(QApplication::translate("Dialog", "Prenom", 0, QApplication::UnicodeUTF8));
        Nom_4->setText(QApplication::translate("Dialog", "Nom", 0, QApplication::UnicodeUTF8));
        Date_4->setText(QApplication::translate("Dialog", "Date de naissance", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("Dialog", "Du", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "NUM_Tel", 0, QApplication::UnicodeUTF8));
        CIN_4->setText(QApplication::translate("Dialog", "Cin", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog", "Taille", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog", "Poids", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Dialog", "id", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Dialog", "adresse", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUT_H
