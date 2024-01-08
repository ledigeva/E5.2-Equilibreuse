#ifndef CODEUR_H
#define CODEUR_H

#include "mcculdaq.h"
#include "qtimer.h"
#include <QObject>

class Codeur : public QObject
{
    Q_OBJECT
public:
    Codeur(int _numDio, MccUldaq &_laCarte, QObject *parent = nullptr);
    ~Codeur();
    void VitesseChange();
    void LancerMesureVitesse();
private:
    int vitesse;
    int numDio;
    MccUldaq &laCarte;
    QTimer timerVitesse;
signals:
void onTimerVitesse_timeout();
};

#endif // CODEUR_H
