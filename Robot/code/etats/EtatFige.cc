#include "EtatFige.h"

using namespace std;

EtatFige* EtatFige::_instance = EtatFige::getInstance();

EtatFige* EtatFige::getInstance() {
	if(_instance == NULL)
		_instance = new EtatFige();
	return _instance;
}

EtatFige::EtatFige() : EtatRobot("EtatFige") {
	//EtatRobot::_etats[getNom()] = this;
	_dernierEtat = NULL;
}

void EtatFige::repartir() {
	cout << "EtatFige::repartir" << endl;
	changerEtat(_dernierEtat->getNom());
}

void EtatFige::setDernierEtat(EtatRobot * etat) {
	_dernierEtat = etat;
}