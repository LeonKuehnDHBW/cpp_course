//
// Created by geilo on 19.06.2023.
//

#include "Bank.hpp"
int Bank::m_girokontoNumber = 0;
int Bank::m_tagesgeldkontoNumber = 0;
int Bank::m_bausparvertragNumber = 0;

void Bank::printBankaccountOverview() {
    cout << "Girokonto(s): " << m_girokontoNumber << endl;
    cout << "Tagesgeldkonto(s): " << m_tagesgeldkontoNumber << endl;
    cout << "Bausparvertrag: " << m_bausparvertragNumber << endl;
}