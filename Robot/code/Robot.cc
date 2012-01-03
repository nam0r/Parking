#include "Robot.h"

using namespace std;

Robot::Robot() :
	_direction("E") {
}

void Robot::avancer(int x, int y) {
	_etat.getEtatCourant()->avancer(x,y);
}

void Robot::tourner(string direction) {
	_etat.getEtatCourant()->tourner(direction);
}

void Robot::saisir(Objet o) {
	_etat.getEtatCourant()->saisir(o);
}

void Robot::poser() {
	_etat.getEtatCourant()->poser();
}

int Robot::peser() {
	_etat.getEtatCourant()->peser();
}

void Robot::rencontrerObstacle(Obstacle o) {
	_etat.getEtatCourant()->rencontrerObstacle(o);
}

int Robot::evaluerObstacle() {
	_etat.getEtatCourant()->evaluerObstacle();
}

void Robot::figer() {
	_etat.getEtatCourant()->figer();
}

void Robot::repartir() {
	_etat.getEtatCourant()->repartir();
}

void Robot::afficher() {

}

/*
void Robot::changerEtat(EtatRobot * nouvelEtat) {
	_etat = nouvelEtat;
}
*/

/* ******** *
 * Gettters *
 * ******** */

Position Robot::getPosition() {
	return _position;
}

std::string Robot::getDirection() {
	return _direction;
}

EtatRobot * Robot::getEtat() {
	return &_etat;
}