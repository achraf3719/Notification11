#include "NotificationPush.h"
#include <iostream>

NotificationPush::NotificationPush(string utilisateur, string application, string message)
    : Notification(utilisateur, message), application(application) {
}

void NotificationPush::afficher() {
    cout << "PUSH | Utilisateur : " << destinataire << " | Application : " << application
        << " | Message : " << message << endl;
}

void NotificationPush::envoyer() {
    cout << "Envoi de la notification push a " << destinataire
        << " (" << application << ")..." << endl;
}
