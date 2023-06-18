//
// Created by geilo on 18.06.2023.
//

#ifndef CPP_COURSE_STUDENT_HPP
#define CPP_COURSE_STUDENT_HPP
#include "Person.hpp"

class Student : public Person {
public:
    Student(string name, string email, string address, double averageGrade)
    :Person(name, email, address)
    ,m_averageGrade(averageGrade)
    {}

private:
    double m_averageGrade;
};


#endif //CPP_COURSE_STUDENT_HPP
