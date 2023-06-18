//
// Created by geilo on 18.06.2023.
//

#ifndef CPP_COURSE_PROFESSOR_HPP
#define CPP_COURSE_PROFESSOR_HPP

#include "Person.hpp"


class Professor : public Person {
public:
    Professor(string name, string email, string address, string iban)
    :Person(name, email, address)
    ,m_iban(iban)
    {}

private:
    string m_iban;
};


#endif //CPP_COURSE_PROFESSOR_HPP
