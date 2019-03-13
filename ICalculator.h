#ifndef ICALCULATOR_H
#define ICALCULATOR_H

#include <QString>

class ICalculator
{
public:
    virtual bool expression(const QString& exp) = 0;
    virtual QString result() = 0;
};

#endif // ICALCULATOR_H
