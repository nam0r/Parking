#include "Robot.h"

using namespace std;

Robot::Robot() :
	_direction("E"),
	_obstacle(NULL),
	_objet(NULL) {
		_etat = EtatRobot::getEtatCourant();
	}

void Robot::avancer(int x, int y) {
	try {
		_etat->avancer(x,y);
		_position.setX(x);
		_position.setY(y);
		changerEtat(_etat->getEtatCourant());
	} catch(exception &e) {
		cerr << e.what() << endl;
	}
	notifie();
}

void Robot::tourner(string direction) {
	try {
		_etat->tourner(direction);
		_direction = direction;
		changerEtat(_etat->getEtatCourant());
	} catch(exception &e) {
		cerr << e.what() << endl;
	}
	notifie();
}

void Robot::saisir(Objet * o) {
	try {
		_etat->saisir(o);
		_objet = o;
		changerEtat(_etat->getEtatCourant());
	} catch(exception &e) {
		cerr << e.what() << endl;
	}
	notifie();
}

void Robot::poser() {
	try {
		_etat->poser();
		_objet = NULL;
		changerEtat(_etat->getEtatCourant());
	} catch(exception &e) {
		cerr << e.what() << endl;
	}
	notifie();
}

int Robot::peser() {
	try {
		_etat->peser();
		return (_objet == NULL) ? 0 : _objet->getPoids();
	} catch(exception &e) {
		cerr << e.what() << endl;
	}
	return 0;
}

void Robot::rencontrerObstacle(Obstacle * o) {
	try {
		_etat->rencontrerObstacle(o);
		_obstacle = o;
		changerEtat(_etat->getEtatCourant());
	} catch(exception &e) {
		cerr << e.what() << endl;
	}
	notifie();
}

int Robot::evaluerObstacle() {
	try {
		_etat->evaluerObstacle();
		return (_obstacle == NULL) ? 0 : _obstacle->getHauteur();
	} catch(exception &e) {
		cerr << e.what() << endl;
	}
	return 0;
}

void Robot::figer() {
	try {
		_etat->figer();
		changerEtat(_etat->getEtatCourant());
	} catch(exception &e) {
		cerr << e.what() << endl;
	}
	notifie();
}

void Robot::repartir() {
	try {
		_etat->repartir();
		changerEtat(_etat->getEtatCourant());
	} catch(exception &e) {
		cerr << e.what() << endl;
	}
	notifie();
}

void Robot::changerEtat(EtatRobot * nouvelEtat) {
	_etat = nouvelEtat;
}

/* ******** *
 * Gettters *
 * ******** */

Position Robot::getPosition() {
	return _position;
}

std::string Robot::getDirection() {
	return _direction;
}

Obstacle * Robot::getObstacle() {
	return _obstacle;
}

Objet * Robot::getObjet() {
	return _objet;
}

EtatRobot * Robot::getEtat() {
	return _etat;
}