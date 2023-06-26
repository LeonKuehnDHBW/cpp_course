//
// Created by geilo on 19.06.2023.
//

#include "Bankaccount.hpp"


void Bankaccount::printBankaccountInfo() {
    cout << "Account ID: " << m_accountID << endl;
    cout << "BLZ: "<< m_BLZ << endl;
    cout << "Credit: "<< m_credit << " Euro" << endl;
    cout << "Interestrate: "<< m_interestRate << " %" << endl;
    cout << " " << endl;
}



