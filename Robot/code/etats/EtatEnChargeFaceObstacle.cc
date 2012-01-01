#include "EtatEnChargeFaceObstacle.h"

using namespace std;

EtatEnChargeFaceObstacle* EtatEnChargeFaceObstacle::_instance = NULL;

EtatEnChargeFaceObstacle* EtatEnChargeFaceObstacle::getInstance() {
	if(_instance == NULL)
		_instance = new EtatEnChargeFaceObstacle();
	return _instance;
}

EtatEnChargeFaceObstacle::EtatEnChargeFaceObstacle() {}

string EtatEnChargeFaceObstacle::getNom() {
	return "EtatEnChargeFaceObstacle";
}

void EtatEnChargeFaceObstacle::tourner(std::string direction) {
	
}

void EtatEnChargeFaceObstacle::poser() {
	
}

int EtatEnChargeFaceObstacle::peser() {
	
}