#ifndef REGLAGE_H
#define REGLAGE_H

#include <QWidget>
#include <QTimer>
#include "mcculdaq.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Reglage; }
QT_END_NAMESPACE

class Reglage : public QWidget
{
    Q_OBJECT

public:
    Reglage(QWidget *parent = nullptr);
    ~Reglage();

private slots:

    void on_pushButtonLancer_clicked();
    void on_ReglageMesureTension();

private:
    Ui::Reglage *ui;
    QTimer timer;
    double valeur;
    MccUldaq laCarte;
};
#endif // REGLAGE_H
