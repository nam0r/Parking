#include "Commande.h"

using namespace std;

Commande::Commande() {
	
}

string Commande::getNom() {
	return _nom;
}


void Commande::execute() {
}

bool Commande::estReversible() {
    return true;
}

void Commande::annule() {
}
