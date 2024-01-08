#ifndef CODEUR_H
#define CODEUR_H

#include "mcculdaq.h"
#include "qtimer.h"
#include <QObject>

class Codeur : public QObject
{
    Q_OBJECT
public:
    Codeur(MccUldaq &_laCarte,int _numDio, QObject *parent = nullptr);
    ~Codeur();
    void LancerMesureVitesse();
    void ArreterMessureVitesse();
private slots:
    void onTimerVitesse_timeout();
private: 
    int vitesse;
    int numDio;
    MccUldaq &laCarte;
    QTimer timerVitesse;
signals:
    void VitesseChange(int vitesse);
};

#endif // CODEUR_H
