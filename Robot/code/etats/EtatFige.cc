#include "EtatFige.h"

using namespace std;

EtatFige* EtatFige::_instance = NULL;

EtatFige* EtatFige::getInstance() {
	if(_instance == NULL)
		_instance = new EtatFige();
	return _instance;
}

EtatFige::EtatFige() : EtatRobot("EtatFige") {
	EtatRobot::_etats[getNom()] = this;
}

void EtatFige::repartir() {
	
}