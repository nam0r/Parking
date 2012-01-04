#include "EtatEnCharge.h"

using namespace std;

EtatEnCharge* EtatEnCharge::_instance = EtatEnCharge::getInstance();

EtatEnCharge* EtatEnCharge::getInstance() {
	if(_instance == NULL)
		_instance = new EtatEnCharge();
	return _instance;
}

EtatEnCharge::EtatEnCharge() : EtatEnRoute("EtatEnCharge") {
	//EtatRobot::_etats[getNom()] = this;
}

void EtatEnCharge::avancer(int x, int y) {
	cout << "EtatEnCharge::avancer" << endl;
}

void EtatEnCharge::tourner(std::string direction) {
	cout << "EtatEnCharge::tourner" << endl;	
}

void EtatEnCharge::rencontrerObstacle(Obstacle * o) {
	cout << "EtatEnCharge::avancer" << endl;
	changerEtat("EtatEnChargeFaceObstacle");
}

int EtatEnCharge::peser() {
	cout << "EtatEnCharge::peser" << endl;	
}