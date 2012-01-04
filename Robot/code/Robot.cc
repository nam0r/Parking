#include "Robot.h"

using namespace std;

Robot::Robot() :
	_direction("E"),
	_obstacle(NULL),
	_objet(NULL) {
		_etat = EtatRobot::getEtatCourant();
	}

void Robot::avancer(int x, int y) {
	_etat->avancer(x,y);
	_position.setX(x);
	_position.setY(y);
	changerEtat(_etat->getEtatCourant());
	notifie();
}

void Robot::tourner(string direction) {
	_etat->tourner(direction);
	_direction = direction;
	_obstacle = NULL;
	changerEtat(_etat->getEtatCourant());
	notifie();
}

void Robot::saisir(Objet * o) {
	_etat->saisir(o);
	_objet = o;
	changerEtat(_etat->getEtatCourant());
	notifie();
}

void Robot::poser() {
	_etat->poser();
	_objet = NULL;
	changerEtat(_etat->getEtatCourant());
	notifie();
}

int Robot::peser() {
	return _etat->peser();
}

void Robot::rencontrerObstacle(Obstacle * o) {
	_etat->rencontrerObstacle(o);
	_obstacle = o;
	changerEtat(_etat->getEtatCourant());
	notifie();
}

int Robot::evaluerObstacle() {
	return _etat->evaluerObstacle();
}

void Robot::figer() {
	_etat->figer();
	changerEtat(_etat->getEtatCourant());
	notifie();
}

void Robot::repartir() {
	_etat->repartir();
	changerEtat(_etat->getEtatCourant());
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