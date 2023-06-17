//
// Created by geilo on 17.06.2023.
//
#include <iostream>
#include "Place.hpp"
using namespace std;

void Place::visit() {
    cout << "" << m_name << " (" << m_x << ", " << m_y << ")" << endl;
}
