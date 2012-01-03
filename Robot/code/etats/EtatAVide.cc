#include "EtatAVide.h"

using namespace std;

EtatAVide* EtatAVide::_instance = NULL;

EtatAVide* EtatAVide::getInstance() {
	if(_instance == NULL) {
		_instance = new EtatAVide();
		//EtatRobot::_etats[_instance->getNom()] = _instance;
	}
	return _instance;
}

EtatAVide::EtatAVide() : EtatEnRoute("EtatAVide") {
	//EtatRobot::_etats[_instance->getNom()] = _instance;
	EtatRobot::_etats[getNom()] = this;
}

void EtatAVide::avancer(int x, int y) {
	
}

void EtatAVide::tourner(std::string direction) {
	
}

void EtatAVide::rencontrerObstacle(Obstacle o) {
	
}