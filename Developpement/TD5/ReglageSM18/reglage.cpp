#include "reglage.h"
#include "ui_reglage.h"

Reglage::Reglage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Reglage)
{
    ui->setupUi(this);
    connect(&timer, &QTimer::timeout, this, &Reglage::on_ReglageMesureTension);

}

Reglage::~Reglage()
{
    delete ui;
}





void Reglage::on_pushButtonLancer_clicked()
{
    if(ui->pushButtonLancer->text()=="Lancer Mesure" ){
        timer.start(500);
        ui->pushButtonLancer->setText("Arrêter Mesure");

    }
    else
    {
        ui->pushButtonLancer->setText("Lancer Mesure");
        ui->lcdNumber->display(0);
        timer.stop();
    }
}

void Reglage::on_ReglageMesureTension()
{
    double valeur;
    laCarte.ulAIn(0,valeur,AIN_FF_DEFAULT);
     ui->lcdNumber->display(valeur);
}

