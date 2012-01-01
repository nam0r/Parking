#include "EtatEnCharge.h"

using namespace std;

EtatEnCharge* EtatEnCharge::_instance = NULL;

EtatEnCharge* EtatEnCharge::getInstance() {
	if(_instance == NULL)
		_instance = new EtatEnCharge();
	return _instance;
}

EtatEnCharge::EtatEnCharge() {}

string EtatEnCharge::getNom() {
	return "EtatEnCharge";
}

void EtatEnCharge::avancer(int x, int y) {
	
}

void EtatEnCharge::tourner(std::string direction) {
	
}

void EtatEnCharge::rencontrerObstacle(Obstacle o) {
	
}

int EtatEnCharge::peser() {
	
}