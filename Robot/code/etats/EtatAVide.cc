#include "EtatAVide.h"

using namespace std;

EtatAVide* EtatAVide::_instance = EtatAVide::getInstance();

EtatAVide* EtatAVide::getInstance() {
	if(_instance == NULL) {
		_instance = new EtatAVide();
		//EtatRobot::_etats[_instance->getNom()] = _instance;
	}
	return _instance;
	/*
	if(EtatAVide::_instance == NULL) {
		EtatAVide::_instance = new EtatAVide();
	}
	return EtatAVide::_instance;
	*/
}

EtatAVide::EtatAVide() : EtatEnRoute("EtatAVide") {
	//EtatRobot::_etats[_instance->getNom()] = _instance;
	//EtatRobot::_etats[getNom()] = this;
}

void EtatAVide::avancer(int x, int y) {
	cout << "EtatAVide::avancer" << endl;
}

void EtatAVide::tourner(std::string direction) {
	cout << "EtatAVide::tourner" << endl;
}

void EtatAVide::rencontrerObstacle(Obstacle * o) {
	cout << "EtatAVide::rencontrerObstacle" << endl;
	changerEtat("EtatAVideFaceObstacle");
}