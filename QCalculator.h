#ifndef QCALCULATOR_H
#define QCALCULATOR_H

#include "QCalculatorUI.h"
#include "QCalculatorDec.h"

class QCalculator
{
protected:
    QCalculatorUI* m_ui;
    QCalculatorDec m_dec;

    QCalculator();

    bool construct();

public:
    static QCalculator* NewInstance();
    void show();
    ~QCalculator();
};

#endif // QCALCULATOR_H
