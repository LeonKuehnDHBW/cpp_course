//
// Created by geilo on 19.06.2023.
//
#include "Bankaccount.hpp"
#include "Girokonto.hpp"
#include "Tagesgeldkonto.hpp"
#include "Bausparvertrag.hpp"
#include "Bank.hpp"

int main2_5() {

    auto account_1(Girokonto(111111, 50.35, 2.5));
    auto account_2(Tagesgeldkonto(13998, 1000, 2.5, 3.5));
    auto account_3(Bausparvertrag(494673, 34800, 2.5, 35000));
    auto account_4(Tagesgeldkonto(38929, 5430,1.5, 1.5));
    auto bank((Bank()));

    account_1.printBankaccountInfo();
    account_1.deposit(-40);
    account_1.printBankaccountInfo();

    account_2.printBankaccountInfo();
    account_2.deposit(-1500);
    account_2.printBankaccountInfo();

    account_3.printBankaccountInfo();
    account_3.deposit(500);
    account_3.printBankaccountInfo();

    account_4.printBankaccountInfo();

    bank.printBankaccountOverview();
}