//
// Created by geilo on 19.06.2023.
//

#ifndef CPP_COURSE_BAUSPARVERTRAG_HPP
#define CPP_COURSE_BAUSPARVERTRAG_HPP
#include "Bankaccount.hpp"


class Bausparvertrag : public Bankaccount{
public:
    Bausparvertrag(int BLZ, double credit, double interestRate, const double savingSum)
    : Bankaccount(BLZ, credit, interestRate)
    ,m_savingSum(savingSum)
    {
        Bank::m_bausparvertragNumber++;
    }


    void printBankaccountInfo() override;
    void deposit (double amount) override;

private:
    const double m_savingSum;
};


#endif //CPP_COURSE_BAUSPARVERTRAG_HPP
