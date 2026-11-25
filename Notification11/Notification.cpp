#include "Notification.h"
#include <iostream>

Notification::Notification(string destinataire, string message)
    : destinataire(destinataire), message(message) {
}

void Notification::afficher() {
    cout << "Destinataire : " << destinataire << " | Message : " << message << endl;
}

Notification::~Notification() {}