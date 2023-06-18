//
// Created by geilo on 18.06.2023.
//
#include <iostream>
#ifndef CPP_COURSE_PERSON_HPP
#define CPP_COURSE_PERSON_HPP
using namespace std;

class Person {
public:
    Person(string name, string email, string address)
    :m_name(name)
    ,m_email(email)
    ,m_address(address)
    {}

protected:
    string m_name;
    string m_email;
    string m_address;
};


#endif //CPP_COURSE_PERSON_HPP
