#ifndef NOTIFICATIONPUSH_H
#define NOTIFICATIONPUSH_H

#include "Notification.h"

class NotificationPush : public Notification {
private:
    string application;

public:
    NotificationPush(string utilisateur, string application, string message);
    void afficher() override;
    void envoyer() override;
};

#endif
