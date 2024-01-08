#ifndef EQUILIBREUSE_H
#define EQUILIBREUSE_H

#include "capot.h"
#include "moteur.h"
#include "codeur.h"
#include <QLabel>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Equilibreuse; }
QT_END_NAMESPACE

class Equilibreuse : public QMainWindow
{
    Q_OBJECT

public:
    Equilibreuse(QWidget *parent = nullptr);
    ~Equilibreuse();
public slots:
    void onCapot_EtatCapotChange(bool _etat);
    void onCodeur_NouvelleVitesse(int value);

private slots:
    void on_pushButton_Lance_clicked();

    void on_pushButton_Arrete_clicked();

    void on_dial_ConsigneVitesses_valueChanged(int value);

private:
    Ui::Equilibreuse *ui;
    QLabel labelEtatCapot;
    Capot *leCapot;
    Codeur *leCodeur;
    Moteur *leMoteur;
    MccUldaq laCarte;


};
#endif // EQUILIBREUSE_H
