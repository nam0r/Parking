#include "EtatAVideFaceObstacle.h"

using namespace std;

EtatAVideFaceObstacle* EtatAVideFaceObstacle::_instance = NULL;

EtatAVideFaceObstacle* EtatAVideFaceObstacle::getInstance() {
	if(_instance == NULL)
		_instance = new EtatAVideFaceObstacle();
	return _instance;
}

EtatAVideFaceObstacle::EtatAVideFaceObstacle() : EtatEnRoute("EtatAVideFaceObstacle") {
	EtatRobot::_etats[getNom()] = this;
}

int EtatAVideFaceObstacle::evaluerObstacle() {
	cout << "EtatAVideFaceObstacle::evaluerObstacle" << endl;
}

void EtatAVideFaceObstacle::tourner(std::string direction) {
	cout << "EtatAVideFaceObstacle::tourner" << endl;
	changerEtat("EtatAVide");
}

void EtatAVideFaceObstacle::saisir(Objet * o) {
	cout << "EtatAVideFaceObstacle::saisir" << endl;
	changerEtat("EtatEnChargeFaceObstacle");
}