//
// Created by geilo on 17.06.2023.
//

#ifndef CPP_COURSE_PLACE_HPP
#define CPP_COURSE_PLACE_HPP

#include <string>

using namespace std;

class Place {
public:
    Place(const string name, const int x,const int y)
    : m_name(name)
    , m_x(x)
    , m_y(y)
    {}

    virtual ~Place(){};
    const virtual void visit();

protected:
    const string m_name;
    const int m_x;
    const int m_y;
};


#endif //CPP_COURSE_PLACE_HPP
