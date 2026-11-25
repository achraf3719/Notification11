#include "NotificationSms.h"
#include <iostream>

NotificationSMS::NotificationSMS(string numero, string operateur, string message)
    : Notification(numero, message), operateur(operateur) {
}

void NotificationSMS::afficher() {
    cout << "SMS | Numero : " << destinataire << " | Operateur : " << operateur
        << " | Message : " << message << endl;
}

void NotificationSMS::envoyer() {
    cout << "Envoi du SMS au " << destinataire << " via " << operateur << "..." << endl;
}