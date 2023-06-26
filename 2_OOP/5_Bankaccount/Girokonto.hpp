//
// Created by geilo on 19.06.2023.
//

#ifndef CPP_COURSE_GIROKONTO_HPP
#define CPP_COURSE_GIROKONTO_HPP9
#include "Bankaccount.hpp"

class Girokonto : public Bankaccount {
public:
    Girokonto(int BLZ, double credit, double interestRate)
    : Bankaccount(BLZ, credit, interestRate)
    {
        Bank::m_girokontoNumber++;
    }

    void printBankaccountInfo() override;
    void deposit (double amount) override;
};


#endif //CPP_COURSE_GIROKONTO_HPP
