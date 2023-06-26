//
// Created by geilo on 19.06.2023.
//

#ifndef CPP_COURSE_USER_HPP
#define CPP_COURSE_USER_HPP

#include <string>

using namespace std;

class User {
public:

    User(string name)
    :m_name(name)
    {
        m_id = m_number;
        m_number++;
    }

    ~User()= default;

    void printUser() const;

private:
    static int m_number;
    const string m_name;
    int m_id;
};


#endif //CPP_COURSE_USER_HPP
