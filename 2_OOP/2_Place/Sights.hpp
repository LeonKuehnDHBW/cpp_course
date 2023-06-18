//
// Created by geilo on 17.06.2023.
//

#ifndef CPP_COURSE_SIGHTS_HPP
#define CPP_COURSE_SIGHTS_HPP
#include "Place.hpp"

using namespace std;

class Sights : public Place{
public:
    Sights(string name, string view, int x, int y)
    : Place(name, x, y)
    , m_view(view)
    {}

    ~Sights(){};

    void visit() override;

private:
    string m_view;
};


#endif //CPP_COURSE_SIGHTS_HPP
