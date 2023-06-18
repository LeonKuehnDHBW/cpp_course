//
// Created by geilo on 17.06.2023.
//
#include <iostream>
#include "Sights.hpp"

void Sights::visit()
{
    Place::visit();
    cout << "Here you can see: " << m_view << endl;
}