#include "EtatRobot.h"

using namespace std;

EtatRobot::EtatRobot() {}

void EtatRobot::avancer(int x, int y) {
	throw EtatRobot::MouvementImpossibleException();
}

void EtatRobot::tourner(string direction) {
	throw EtatRobot::MouvementImpossibleException();
}

void EtatRobot::saisir(Objet o) {
	throw EtatRobot::DejaChargeException();
}

void EtatRobot::poser() {
	throw ObjetAbsentException();
}

int EtatRobot::peser() {
	throw ObjetAbsentException();
}

void EtatRobot::rencontrerObstacle(Obstacle o) {

}

int EtatRobot::evaluerObstacle() {

}

void EtatRobot::figer() {

}

void EtatRobot::repartir() {

}