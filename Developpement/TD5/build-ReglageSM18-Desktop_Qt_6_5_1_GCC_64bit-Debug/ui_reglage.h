/********************************************************************************
** Form generated from reading UI file 'reglage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGLAGE_H
#define UI_REGLAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reglage
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QLabel *label_2;
    QPushButton *pushButtonLancer;
    QPushButton *pushButtonQuitter;

    void setupUi(QWidget *Reglage)
    {
        if (Reglage->objectName().isEmpty())
            Reglage->setObjectName("Reglage");
        Reglage->resize(342, 122);
        gridLayout = new QGridLayout(Reglage);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(Reglage);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lcdNumber = new QLCDNumber(Reglage);
        lcdNumber->setObjectName("lcdNumber");

        horizontalLayout->addWidget(lcdNumber);

        label_2 = new QLabel(Reglage);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        pushButtonLancer = new QPushButton(Reglage);
        pushButtonLancer->setObjectName("pushButtonLancer");

        gridLayout->addWidget(pushButtonLancer, 1, 0, 1, 1);

        pushButtonQuitter = new QPushButton(Reglage);
        pushButtonQuitter->setObjectName("pushButtonQuitter");

        gridLayout->addWidget(pushButtonQuitter, 1, 1, 1, 1);


        retranslateUi(Reglage);
        QObject::connect(pushButtonQuitter, &QPushButton::clicked, Reglage, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(Reglage);
    } // setupUi

    void retranslateUi(QWidget *Reglage)
    {
        Reglage->setWindowTitle(QCoreApplication::translate("Reglage", "Reglage", nullptr));
        label->setText(QCoreApplication::translate("Reglage", "Valeur de la tension de calibrage :", nullptr));
        label_2->setText(QCoreApplication::translate("Reglage", "V", nullptr));
        pushButtonLancer->setText(QCoreApplication::translate("Reglage", "Lancer Mesure", nullptr));
        pushButtonQuitter->setText(QCoreApplication::translate("Reglage", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Reglage: public Ui_Reglage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGLAGE_H
