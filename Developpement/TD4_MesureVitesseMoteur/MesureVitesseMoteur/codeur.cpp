#include "codeur.h"

Codeur::Codeur(MccUldaq &_laCarte, int _numDio, QObject *parent)
    : QObject{parent},
      numDio(_numDio),
      laCarte(_laCarte)
{
    connect(&timerVitesse, &QTimer::timeout, this, &Codeur::onTimerVitesse_timeout);
    timerVitesse.setTimerType(Qt::PreciseTimer);
    timerVitesse.setSingleShot(true);

}

Codeur::~Codeur()
{

}

void Codeur::LancerMesureVitesse()
{
    laCarte.UlCClear();
    timerVitesse.start(500);

}

void Codeur::ArreterMessureVitesse()
{
    timerVitesse.stop();
}

void Codeur::onTimerVitesse_timeout()
{
    long valCpt;
    int vitesseCalculee = 0;
    laCarte.ulCIn(valCpt);
    if(vitesse!=vitesseCalculee){
        timerVitesse.start(500);
        emit VitesseChange(vitesse);
        vitesse=vitesseCalculee;
    }
}
