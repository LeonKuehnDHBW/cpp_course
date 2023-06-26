//
// Created by geilo on 18.06.2023.
//
#include <iostream>

#include "Toilets.hpp"


const void Toilets::visit() {
    Place::visit();
    cout << "Here it smells like: " << m_smell << endl;
}