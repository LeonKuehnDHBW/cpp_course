//
// Created by geilo on 19.06.2023.
//

#include "Bausparvertrag.hpp"

void Bausparvertrag::printBankaccountInfo() {
    cout << "Accounttype: Bausparvertrag" << endl;
    cout << "Saving sum: " << m_savingSum << endl;
    Bankaccount::printBankaccountInfo();
}

void Bausparvertrag::deposit(double amount) {
    if(m_credit + amount < m_savingSum){
        m_credit += amount;
    }
}