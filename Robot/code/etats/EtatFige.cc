#include "EtatFige.h"

using namespace std;

EtatFige* EtatFige::_instance = NULL;

EtatFige* EtatFige::getInstance() {
	if(_instance == NULL)
		_instance = new EtatFige();
	return _instance;
}

EtatFige::EtatFige() {}

string EtatFige::getNom() {
	return "EtatFige";
}

void EtatFige::repartir() {
	
}