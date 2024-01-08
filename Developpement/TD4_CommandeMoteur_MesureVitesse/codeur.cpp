#include "codeur.h"

Codeur::Codeur(int _numDio, MccUldaq &_laCarte, QObject *parent)
    : QObject{parent},
      numDio(_numDio),
      laCarte(_laCarte)
{
    connect(&timerVitesse, &QTimer::timeout, this, &Codeur::onTimerVitesse_timeout);
    timerVitesse.setTimerType(Qt::PreciseTimer);
    timerVitesse.setSingleShot(true);
    laCarte.UlCClear();
    timerVitesse.start();

}

void Codeur::VitesseChange()
{

}

void Codeur::LancerMesureVitesse()
{

}

void Codeur::onTimerVitesse_timeout()
{

}
