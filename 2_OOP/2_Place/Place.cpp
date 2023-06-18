//
// Created by geilo on 17.06.2023.
//
#include <iostream>
#include "Place.hpp"
using namespace std;

void Place::visit()
{
    cout << "" << m_name;
    cout << " (" << m_x;
    cout << ", " << m_y;
    cout << ")" << endl;
}

