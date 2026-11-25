#include "NotificationEmail.h"
#include <iostream>

NotificationEmail::NotificationEmail(string destinataire, string objet, string message)
    : Notification(destinataire, message), objet(objet) {
}

void NotificationEmail::afficher() {
    cout << "EMAIL | A : " << destinataire << " | Objet : " << objet
        << " | Message : " << message << endl;
}

void NotificationEmail::envoyer() {
    cout << "Envoi de l'email a " << destinataire << "..." << endl;
}
