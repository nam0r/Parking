#include "EtatAVideFaceObstacle.h"

using namespace std;

EtatAVideFaceObstacle* EtatAVideFaceObstacle::_instance = NULL;

EtatAVideFaceObstacle* EtatAVideFaceObstacle::getInstance() {
	if(_instance == NULL)
		_instance = new EtatAVideFaceObstacle();
	return _instance;
}

EtatAVideFaceObstacle::EtatAVideFaceObstacle() {}

string EtatAVideFaceObstacle::getNom() {
	return "EtatAVideFaceObstacle";
}

int EtatAVideFaceObstacle::evaluerObstacle() {
	
}

void EtatAVideFaceObstacle::tourner(std::string direction) {
	
}

void EtatAVideFaceObstacle::saisir(Objet o) {
	
}