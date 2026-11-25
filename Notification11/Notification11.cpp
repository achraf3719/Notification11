#include <iostream>
#include "NotificationEmail.h"
#include "NotificationSMS.h"
#include "NotificationPush.h"
#include "GestionnaireNotifications.h"
using namespace std;

int main() {
    // ===== Partie C =====
    NotificationEmail n1("achraf@example.com", "Bienvenue", "Votre compte a ete cree");
    NotificationSMS n2("0698765432", "Inwi", "Code de validation : 7391");
    NotificationPush n3("user_205", "ShopApp", "Votre commande est expediee");

    Notification* liste[3];
    liste[0] = &n1;
    liste[1] = &n2;
    liste[2] = &n3;

    for (int i = 0; i < 3; i++) {
        liste[i]->afficher();
        liste[i]->envoyer();
        cout << "-------------------------" << endl;
    }

    // ===== Partie D =====
    GestionnaireNotifications g;
    g.ajouter(&n1);
    g.ajouter(&n2);
    g.ajouter(&n3);

    cout << "\nEnvoi groupe :" << endl;
    g.envoyerToutes();

    return 0;
}