#include "EtatAVide.h"

using namespace std;

EtatAVide* EtatAVide::_instance = NULL;

EtatAVide* EtatAVide::getInstance() {
	if(_instance == NULL)
		_instance = new EtatAVide();
	return _instance;
}

EtatAVide::EtatAVide() {}

string EtatAVide::getNom() {
	return "EtatAVide";
}

void EtatAVide::avancer(int x, int y) {
	
}

void EtatAVide::tourner(std::string direction) {
	
}

void EtatAVide::rencontrerObstacle(Obstacle o) {
	
}