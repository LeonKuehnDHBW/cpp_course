//
// Created by geilo on 18.06.2023.
//

#ifndef CPP_COURSE_TOILETS_HPP
#define CPP_COURSE_TOILETS_HPP
using namespace std;

#include "Place.hpp"

class Toilets : public Place {
public:
    Toilets(string name, const string smell, int x, int y)
    : Place(name, x, y)
    ,m_smell(smell)
    {}

    ~Toilets(){};

    const void visit() override;

private:
    const string m_smell;
};


#endif //CPP_COURSE_TOILETS_HPP
