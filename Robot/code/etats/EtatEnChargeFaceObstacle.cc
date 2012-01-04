#include "EtatEnChargeFaceObstacle.h"

using namespace std;

EtatEnChargeFaceObstacle* EtatEnChargeFaceObstacle::_instance = EtatEnChargeFaceObstacle::getInstance();

EtatEnChargeFaceObstacle* EtatEnChargeFaceObstacle::getInstance() {
	if(_instance == NULL)
		_instance = new EtatEnChargeFaceObstacle();
	return _instance;
}

EtatEnChargeFaceObstacle::EtatEnChargeFaceObstacle() : EtatEnRoute("EtatEnChargeFaceObstacle") {
	//EtatRobot::_etats[getNom()] = this;
}

void EtatEnChargeFaceObstacle::tourner(std::string direction) {
	cout << "EtatEnChargeFaceObstacle::tourner" << endl;
	changerEtat("EtatEnCharge");
}

void EtatEnChargeFaceObstacle::poser() {
	cout << "EtatEnChargeFaceObstacle::poser" << endl;	
	changerEtat("EtatAVideFaceObstacle");
}

int EtatEnChargeFaceObstacle::peser() {
	cout << "EtatEnChargeFaceObstacle::peser" << endl;
	
}