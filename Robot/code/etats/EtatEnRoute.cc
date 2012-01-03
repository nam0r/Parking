#include "EtatEnRoute.h"

#include "EtatFige.h"

using namespace std;

EtatEnRoute::EtatEnRoute(string nom) : EtatRobot(nom) {}

void EtatEnRoute::figer() {
	cout << "EtatEnRoute::figer" << endl;
	EtatFige::getInstance()->setDernierEtat(_etatCourant);
	changerEtat("EtatFige");
}