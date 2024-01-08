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
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QDial *dial_ConsigneVitesse;
    QLCDNumber *lcdNumber_consigne;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_Lancer;
    QPushButton *pushButton_Arreter;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Equilibreuse)
    {
        if (Equilibreuse->objectName().isEmpty())
            Equilibreuse->setObjectName("Equilibreuse");
        Equilibreuse->resize(281, 372);
        centralwidget = new QWidget(Equilibreuse);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        dial_ConsigneVitesse = new QDial(groupBox);
        dial_ConsigneVitesse->setObjectName("dial_ConsigneVitesse");

        horizontalLayout->addWidget(dial_ConsigneVitesse);

        lcdNumber_consigne = new QLCDNumber(groupBox);
        lcdNumber_consigne->setObjectName("lcdNumber_consigne");
        QFont font;
        font.setPointSize(15);
        lcdNumber_consigne->setFont(font);

        horizontalLayout->addWidget(lcdNumber_consigne);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_Lancer = new QPushButton(groupBox);
        pushButton_Lancer->setObjectName("pushButton_Lancer");

        horizontalLayout_2->addWidget(pushButton_Lancer);

        pushButton_Arreter = new QPushButton(groupBox);
        pushButton_Arreter->setObjectName("pushButton_Arreter");

        horizontalLayout_2->addWidget(pushButton_Arreter);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        Equilibreuse->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Equilibreuse);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 281, 20));
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
        pushButton_Lancer->setText(QCoreApplication::translate("Equilibreuse", "Lancer Moteur", nullptr));
        pushButton_Arreter->setText(QCoreApplication::translate("Equilibreuse", "Arr\303\252ter Moteur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Equilibreuse: public Ui_Equilibreuse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUILIBREUSE_H
