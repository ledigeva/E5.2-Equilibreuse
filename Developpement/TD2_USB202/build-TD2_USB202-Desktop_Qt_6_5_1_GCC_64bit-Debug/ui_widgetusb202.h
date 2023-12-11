/********************************************************************************
** Form generated from reading UI file 'widgetusb202.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETUSB202_H
#define UI_WIDGETUSB202_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetUSB202
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_BP1;
    QCheckBox *checkBox_LED1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_BP2;
    QCheckBox *checkBox_LED2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_BP3;
    QCheckBox *checkBox_LED3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_BP4;
    QCheckBox *checkBox_LED4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_Quitter;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetUSB202)
    {
        if (WidgetUSB202->objectName().isEmpty())
            WidgetUSB202->setObjectName("WidgetUSB202");
        WidgetUSB202->resize(431, 329);
        gridLayout = new QGridLayout(WidgetUSB202);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_BP1 = new QLabel(WidgetUSB202);
        label_BP1->setObjectName("label_BP1");
        label_BP1->setStyleSheet(QString::fromUtf8("background-color:rgb(239, 41, 41);\n"
""));
        label_BP1->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_BP1);

        checkBox_LED1 = new QCheckBox(WidgetUSB202);
        checkBox_LED1->setObjectName("checkBox_LED1");

        horizontalLayout->addWidget(checkBox_LED1);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_BP2 = new QLabel(WidgetUSB202);
        label_BP2->setObjectName("label_BP2");
        label_BP2->setStyleSheet(QString::fromUtf8("background-color:rgb(239, 41, 41);\n"
""));
        label_BP2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_BP2);

        checkBox_LED2 = new QCheckBox(WidgetUSB202);
        checkBox_LED2->setObjectName("checkBox_LED2");

        horizontalLayout_2->addWidget(checkBox_LED2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_BP3 = new QLabel(WidgetUSB202);
        label_BP3->setObjectName("label_BP3");
        label_BP3->setStyleSheet(QString::fromUtf8("background-color:rgb(239, 41, 41);\n"
""));
        label_BP3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_BP3);

        checkBox_LED3 = new QCheckBox(WidgetUSB202);
        checkBox_LED3->setObjectName("checkBox_LED3");

        horizontalLayout_3->addWidget(checkBox_LED3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_BP4 = new QLabel(WidgetUSB202);
        label_BP4->setObjectName("label_BP4");
        label_BP4->setStyleSheet(QString::fromUtf8("background-color:rgb(239, 41, 41);\n"
""));
        label_BP4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_BP4);

        checkBox_LED4 = new QCheckBox(WidgetUSB202);
        checkBox_LED4->setObjectName("checkBox_LED4");

        horizontalLayout_4->addWidget(checkBox_LED4);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_Quitter = new QPushButton(WidgetUSB202);
        pushButton_Quitter->setObjectName("pushButton_Quitter");

        verticalLayout_2->addWidget(pushButton_Quitter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_5->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_5, 0, 0, 1, 1);


        retranslateUi(WidgetUSB202);
        QObject::connect(pushButton_Quitter, &QPushButton::clicked, WidgetUSB202, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(WidgetUSB202);
    } // setupUi

    void retranslateUi(QWidget *WidgetUSB202)
    {
        WidgetUSB202->setWindowTitle(QCoreApplication::translate("WidgetUSB202", "WidgetUSB202", nullptr));
        label_BP1->setText(QCoreApplication::translate("WidgetUSB202", "BP1", nullptr));
        checkBox_LED1->setText(QCoreApplication::translate("WidgetUSB202", "LED1", nullptr));
        label_BP2->setText(QCoreApplication::translate("WidgetUSB202", "BP2", nullptr));
        checkBox_LED2->setText(QCoreApplication::translate("WidgetUSB202", "LED2", nullptr));
        label_BP3->setText(QCoreApplication::translate("WidgetUSB202", "BP3", nullptr));
        checkBox_LED3->setText(QCoreApplication::translate("WidgetUSB202", "LED3", nullptr));
        label_BP4->setText(QCoreApplication::translate("WidgetUSB202", "BP4", nullptr));
        checkBox_LED4->setText(QCoreApplication::translate("WidgetUSB202", "LED4", nullptr));
        pushButton_Quitter->setText(QCoreApplication::translate("WidgetUSB202", "QUITTER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetUSB202: public Ui_WidgetUSB202 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETUSB202_H
