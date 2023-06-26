//
// Created by geilo on 19.06.2023.
//

#ifndef CPP_COURSE_TAGESGELDKONTO_HPP
#define CPP_COURSE_TAGESGELDKONTO_HPP

#include "Bankaccount.hpp"

class Tagesgeldkonto : public Bankaccount{
public:
    Tagesgeldkonto(int BLZ, double credit, double interestRate, const double minimumTerm)
    : Bankaccount(BLZ, credit, interestRate)
    ,m_minimumTerm(minimumTerm)
    {
        Bank::m_tagesgeldkontoNumber++;
    }

    void printBankaccountInfo() override;
    void deposit (double amount) override;

private:
    const double m_minimumTerm;
};


#endif //CPP_COURSE_TAGESGELDKONTO_HPP
