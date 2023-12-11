#include "equilibreuse.h"
#include "ui_equilibreuse.h"
#include <QMessageBox>

Equilibreuse::Equilibreuse(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Equilibreuse)
{
    ui->setupUi(this);
    ui->statusbar->addPermanentWidget(&labelEtatCapot);
    leCapot= new Capot(laCarte,0, this);
    connect(leCapot, &Capot::EtatCapotChange, this, &Equilibreuse::onCapot_EtatCapotChange);
    leMoteur = new Moteur(laCarte,0,4);
}

Equilibreuse::~Equilibreuse()
{
    delete ui;
    delete leCapot;
    delete leMoteur;
}

void Equilibreuse::onCapot_EtatCapotChange(bool _etat)
{
    /*
        QMessageBox message;
        QString etatCapot;
        if(_etat){
            etatCapot = "Fermer";
        } else {
            etatCapot = "Ouvert";
        }
        message.setText("Le capot est " + etatCapot);
        message.exec();
        */

    QPalette palette;
        labelEtatCapot.setAutoFillBackground(true);
        if(_etat)
        {
            palette.setColor(QPalette::WindowText,Qt::black);
            labelEtatCapot.setPalette(palette);
            labelEtatCapot.setText("| Capot Ouvert |");
        }
        else
        {
            palette.setColor(QPalette::WindowText,Qt::red);
            labelEtatCapot.setPalette(palette);
            labelEtatCapot.setText("| Capot Fermer |");
        }
}


void Equilibreuse::on_pushButton_Lancer_clicked()
{
if(ui->pushButton_Lancer->text()=="Lancer Moteur" ){
    ui->pushButton_Lancer->setText("Fixer Consigne");
}
    leMoteur->FixerConsigneVitesse(ui->dial_ConsigneVitesse->value());
}


void Equilibreuse::on_pushButton_Arreter_clicked()
{
    ui->pushButton_Lancer->setText("Lancer Moteur");
    ui->dial_ConsigneVitesse->setValue(0);
    leMoteur->FixerConsigneVitesse(0);
}


void Equilibreuse::on_dial_ConsigneVitesse_valueChanged(int value)
{
    ui->lcdNumber_consigne->display(value);
}

