//
// Created by geilo on 17.06.2023.
//

#ifndef CPP_COURSE_PLACE_HPP
#define CPP_COURSE_PLACE_HPP

#include <string>

using namespace std;

class Place {
public:
    Place(string name, double x, double y)
    : m_name(name)
    , m_x(x)
    , m_y(y)
    {}

    void visit(){}

protected:
    string m_name;
    double m_x;
    double m_y;
};


#endif //CPP_COURSE_PLACE_HPP
