#include "capot.h"

Capot::Capot(MccUldaq &_laCarte, int _numDio, QObject *parent)
    : QObject{parent},
      numDio(_numDio),
      laCarte(_laCarte)
{
    laCarte.ulDConfigBit(0,DD_INPUT);
    laCarte.ulDBitIn(0,etatCapot);
    connect(&timerCapot, &QTimer::timeout, this, &Capot::onTimerCapot_timout);
    timerCapot.start(500); // equivalent de tempo_capot

}

void Capot::onTimerCapot_timout()
{
    bool etatCourant;
    laCarte.ulDBitIn(0, etatCourant);
    if(etatCapot!=etatCourant){
               emit EtatCapotChange(etatCourant);
               etatCapot=etatCourant;
    }
}
