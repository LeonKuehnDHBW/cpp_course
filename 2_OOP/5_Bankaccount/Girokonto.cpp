//
// Created by geilo on 19.06.2023.
//

#include "Girokonto.hpp"


void Girokonto::printBankaccountInfo() {
    cout << "Accounttype: Girokonto" << endl;
    Bankaccount::printBankaccountInfo();
}
void Girokonto::deposit(double amount) {
    m_credit = m_credit + amount;
}
