//
// Created by geilo on 19.06.2023.
//

#include "Tagesgeldkonto.hpp"

void Tagesgeldkonto::printBankaccountInfo() {
    cout << "Accounttype: Tagesgeldkonto" << endl;
    cout << "Minimum term: " << m_minimumTerm << " years" << endl;
    Bankaccount::printBankaccountInfo();
}

void Tagesgeldkonto::deposit(double amount) {
    if(amount < 0){
        if(m_credit + amount > 0){
            m_credit += amount;
        }
    }
    else{ m_credit += amount;}
}