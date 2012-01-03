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
	cout << oss.str() << endl;
}