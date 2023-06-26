//
// Created by geilo on 19.06.2023.
//
#include <iostream>
#include "User.hpp"
int User::m_number = 0;

void User::printUser() const {
    cout << "Name: " << m_name;
    cout << " ID: " << m_id << endl;
}
