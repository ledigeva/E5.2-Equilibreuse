#ifndef CAPOT_H
#define CAPOT_H

#include "mcculdaq.h"
#include "qtimer.h"
#include <QObject>

class Capot : public QObject
{
    Q_OBJECT
public:
    Capot(MccUldaq &_laCarte,int _numDio, QObject *parent);
signals:
    void EtatCapotChange(bool etatCapot);
private slots:
    void onTimerCapot_timout();
private:
    QTimer timerCapot;
    bool etatCapot;
    int numDio;
    MccUldaq &laCarte;
};

#endif // CAPOT_H
