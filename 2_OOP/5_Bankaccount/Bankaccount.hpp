//
// Created by geilo on 19.06.2023.
//
#include <iostream>
#include <random>

#ifndef CPP_COURSE_BANKACCOUNT_HPP
#define CPP_COURSE_BANKACCOUNT_HPP
using namespace std;
#include "Bank.hpp"

class Bankaccount {
public:

    Bankaccount(const int BLZ, double credit, const double interestRate)
    :m_BLZ(BLZ)
    ,m_credit(credit)
    ,m_interestRate(interestRate)
    {
        random_device device;
        mt19937 generator(device());
        uniform_int_distribution<int> distribution(100000, 999999);

        m_accountID = distribution(generator);
    }

    virtual ~Bankaccount()= default;

    virtual void printBankaccountInfo() = 0;
    virtual void deposit(double amount) = 0;


protected:
    double m_credit;

private:
    int m_accountID;
    const int m_BLZ;
    const double m_interestRate;
};


#endif //CPP_COURSE_BANKACCOUNT_HPP
