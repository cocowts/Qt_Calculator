#ifndef QCALCULATORDEC_H
#define QCALCULATORDEC_H

#include <QString>
#include <QQueue>
#include <QStack>

#include "ICalculator.h"

class QCalculatorDec : public ICalculator
{
protected:
    QString m_exp;
    QString m_result;

    bool isDigitOrDot(QChar c);
    bool isSymbol(QChar c);
    bool isSign(QChar c);
    bool isNumber(QString s);
    bool isOperator(QString s);
    bool isLeft(QString s);
    bool isRight(QString s);
    int priority(QString s);

    QQueue<QString> split(const QString& exp);
    bool match(const QQueue<QString>& exp);
    bool transform(QQueue<QString>& exp, QQueue<QString>& output);
    QString calculator(QQueue<QString>& exp);
    QString calculator(QString l, QString op, QString r);

public:
    QCalculatorDec();
    bool expression(const QString& exp);
    QString result();
    ~QCalculatorDec();
};

#endif // QCALCULATORDEC_H
