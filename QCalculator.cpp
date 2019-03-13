#include "QCalculator.h"

QCalculator::QCalculator()
{

}

bool QCalculator::construct()
{
    m_ui = QCalculatorUI::NewInstance();

    if( m_ui != nullptr )
    {
        m_ui->setCalculator(&m_dec);
    }

   return (m_ui != nullptr);
}

QCalculator* QCalculator::NewInstance()
{
    QCalculator* ret = new QCalculator();

    if( (ret == nullptr) || !ret->construct() )
    {
        delete ret;
        ret = nullptr;
    }

    return ret;
}

void QCalculator::show()
{
    m_ui->show();
}

QCalculator::~QCalculator()
{
    delete m_ui;
}
