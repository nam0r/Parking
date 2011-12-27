#include "Robot.h"

using namespace std;

Robot::Robot() {

}

void Robot::avancer(int x, int y) {
	_etat.avancer(x,y);
}

void Robot::tourner(direction) {
	_etat.tourner(direction);
}

void Robot::saisir(Objet o) {
	_etat.saisir(o);
}

void Robot::poser() {
	_etat.poser();
}

int Robot::peser() {
	_etat.peser();
}

void Robot::rencontrerObstacle(Obstacle o) {
	_etat.rencontrerObstacle(o);
}

int Robot::evaluerObstacle() {
	_etat.evaluerObstacle();
}

void Robot::figer() {
	_etat.figer();
}

void Robot::repartir() {
	_etat.repartir();
}

void Robot::afficher() {

}

void Robot::changerEtat(EtatRobot * nouvelEtat) {
	_etat = nouvelEtat;
}