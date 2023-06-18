//
// Created by geilo on 17.06.2023.
//

#ifndef CPP_COURSE_PLACE_HPP
#define CPP_COURSE_PLACE_HPP

#include <string>

using namespace std;

class Place {
public:
    Place(string name, int x, int y)
    : m_name(name)
    , m_x(x)
    , m_y(y)
    {}



    virtual ~Place(){};

    virtual void visit();

protected:
    string m_name;
    int m_x;
    int m_y;
};


#endif //CPP_COURSE_PLACE_HPP
