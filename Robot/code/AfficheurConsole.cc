#include "AfficheurConsole.h"

using namespace std;

AfficheurConsole::AfficheurConsole(Robot * robot) {
	_robot = robot;
	miseAJour();
}

void AfficheurConsole::miseAJour() {
	ostringstream oss;
	oss << "Le robot est aux coordonnées (" 
		<< _robot->getPosition().getX() << ","
		<< _robot->getPosition().getY() << ")"
		<< endl;
	oss << "Sa direction est : " << _robot->getDirection() << endl;
	oss << "Il est dans l'etat " << _robot->getEtat()->getNom() << endl;

	if(_robot->getObjet() == NULL) {
		oss << "Il n'est pas chargé." << endl;
	}
	else {
		oss << "Il porte un objet de poids " << _robot->getObjet()->getPoids() << "." << endl;
	}

	if(_robot->getObstacle() == NULL) {
		oss << "Il n'est pas face à un obstacle." << endl;
	}
	else {
		oss << "Il est face à un obstacle de hauteur " << _robot->getObstacle()->getHauteur() 
			<< "." << endl;
	}

	cout << oss.str() << endl;
}