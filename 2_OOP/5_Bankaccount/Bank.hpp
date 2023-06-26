//
// Created by geilo on 19.06.2023.
//
#include <iostream>
#ifndef CPP_COURSE_BANK_HPP
#define CPP_COURSE_BANK_HPP
using namespace std;

class Bank {
public:
    Bank()= default;

    static int m_girokontoNumber;
    static int m_tagesgeldkontoNumber;
    static int m_bausparvertragNumber;

    void printBankaccountOverview();
};


#endif //CPP_COURSE_BANK_HPP
