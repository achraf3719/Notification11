#ifndef NOTIFICATIONEMAIL_H
#define NOTIFICATIONEMAIL_H

#include "Notification.h"

class NotificationEmail : public Notification {
private:
    string objet;

public:
    NotificationEmail(string destinataire, string objet, string message);
    void afficher() override;
    void envoyer() override;
};

#endif

