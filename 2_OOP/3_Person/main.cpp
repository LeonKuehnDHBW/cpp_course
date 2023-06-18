//
// Created by geilo on 18.06.2023.
//

#include <iostream>
#include "Professor.hpp"
#include "MailHandler.hpp"

int main()
{
    Professor prof1("Herr Drüppel", "drüppel@gmail.com", "Suttgart", "DE95 82972923729");
    MailHandler mail;

    mail.writeMail(prof1, "Ich habe eine Frage zum Aufstellen einer Differntialgleichung");
}