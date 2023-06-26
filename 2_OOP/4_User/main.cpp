//
// Created by geilo on 19.06.2023.
//
#include "User.hpp"


int main2_4(){

    auto User_1{User("Carl")};
    auto User_2{User("Jannik")};
    auto User_3{User("Linus")};

    User_1.printUser();
    User_2.printUser();
    User_3.printUser();
}