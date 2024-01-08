/********************************************************************************
** Form generated from reading UI file 'equilibreuse.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUILIBREUSE_H
#define UI_EQUILIBREUSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Equilibreuse
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayouts;
    QDial *dial_ConsigneVitesses;
    QLCDNumber *lcdNumber_consignes;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_Lance;
    QPushButton *pushButton_Arrete;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLCDNumber *lcdNumber_vitesse;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Equilibreuse)
    {
        if (Equilibreuse->objectName().isEmpty())
            Equilibreuse->setObjectName("Equilibreuse");
        Equilibreuse->resize(291, 322);
        centralwidget = new QWidget(Equilibreuse);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalLayouts = new QHBoxLayout();
        horizontalLayouts->setObjectName("horizontalLayouts");
        dial_ConsigneVitesses = new QDial(groupBox);
        dial_ConsigneVitesses->setObjectName("dial_ConsigneVitesses");

        horizontalLayouts->addWidget(dial_ConsigneVitesses);

        lcdNumber_consignes = new QLCDNumber(groupBox);
        lcdNumber_consignes->setObjectName("lcdNumber_consignes");
        QFont font;
        font.setPointSize(15);
        lcdNumber_consignes->setFont(font);

        horizontalLayouts->addWidget(lcdNumber_consignes);


        gridLayout_3->addLayout(horizontalLayouts, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_Lance = new QPushButton(groupBox);
        pushButton_Lance->setObjectName("pushButton_Lance");

        horizontalLayout_4->addWidget(pushButton_Lance);

        pushButton_Arrete = new QPushButton(groupBox);
        pushButton_Arrete->setObjectName("pushButton_Arrete");

        horizontalLayout_4->addWidget(pushButton_Arrete);


        gridLayout_3->addLayout(horizontalLayout_4, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName("gridLayout");
        lcdNumber_vitesse = new QLCDNumber(groupBox_2);
        lcdNumber_vitesse->setObjectName("lcdNumber_vitesse");
        lcdNumber_vitesse->setFont(font);

        gridLayout->addWidget(lcdNumber_vitesse, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 1);

        Equilibreuse->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Equilibreuse);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 291, 20));
        Equilibreuse->setMenuBar(menubar);
        statusbar = new QStatusBar(Equilibreuse);
        statusbar->setObjectName("statusbar");
        Equilibreuse->setStatusBar(statusbar);

        retranslateUi(Equilibreuse);

        QMetaObject::connectSlotsByName(Equilibreuse);
    } // setupUi

    void retranslateUi(QMainWindow *Equilibreuse)
    {
        Equilibreuse->setWindowTitle(QCoreApplication::translate("Equilibreuse", "Equilibreuse", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Equilibreuse", "Consigne vitesse (en %)", nullptr));
        pushButton_Lance->setText(QCoreApplication::translate("Equilibreuse", "Lancer Moteur", nullptr));
        pushButton_Arrete->setText(QCoreApplication::translate("Equilibreuse", "Arr\303\252ter Moteur", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Equilibreuse", "Vitesse du moteur en tours par minutes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Equilibreuse: public Ui_Equilibreuse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUILIBREUSE_H
