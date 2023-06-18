//
// Created by geilo on 18.06.2023.
//

#include "MailHandler.hpp"
void MailHandler::writeMail(Person receiver, std::string txt) {
    cout << "" << receiver.getName() << " hat die Nachricht: '";
    cout << txt << "' " << endl;
}