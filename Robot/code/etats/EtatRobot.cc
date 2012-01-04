#include "EtatRobot.h"

#include "EtatFige.h"
#include "EtatEnCharge.h"
#include "EtatEnChargeFaceObstacle.h"
#include "EtatAVide.h"
#include "EtatAVideFaceObstacle.h"

using namespace std;

// Construct on first use idiom
// http://www.parashift.com/c++-faq-lite/ctors.html#faq-10.15
map<string, EtatRobot*> & EtatRobot::_etats() {
	static map<string, EtatRobot*> * e = new map<string, EtatRobot*>();
	return *e;
}

EtatRobot* EtatRobot::_etatCourant = EtatAVide::getInstance();

EtatRobot::EtatRobot() {}

EtatRobot::EtatRobot(string nom) {
	_nom = nom;
	EtatRobot::_etats()[_nom] = this;
}

string EtatRobot::getNom() {
	return _nom;
}

EtatRobot* EtatRobot::getEtatCourant() {
	/*
	if(_etats.find(_etatCourant) == _etats.end()) {
		cerr << "L'etat nommé " << _etatCourant << " n'existe pas !" << endl;
		exit(EXIT_FAILURE);
	}
	return _etats[_etatCourant];
	*/
	return _etatCourant;
}

void EtatRobot::changerEtat(string nom) {
	if(_etats().find(nom) == _etats().end()) {
		cerr << "L'etat nommé " << nom << " n'existe pas !" << endl;
		exit(EXIT_FAILURE);
	}
	_etatCourant = _etats()[nom];
}

void EtatRobot::avancer(int x, int y) {
	throw EtatRobot::Exception(getNom(), "avancer");
}

void EtatRobot::tourner(string direction) {
	throw EtatRobot::Exception(getNom(), "tourner");
}

void EtatRobot::saisir(Objet * o) {
	throw EtatRobot::Exception(getNom(), "saisir");
}

void EtatRobot::poser() {
	throw EtatRobot::Exception(getNom(), "poser");
}

int EtatRobot::peser() {
	throw EtatRobot::Exception(getNom(), "peser");
}

void EtatRobot::rencontrerObstacle(Obstacle * o) {
	throw EtatRobot::Exception(getNom(), "rencontrerObstacle");
}

int EtatRobot::evaluerObstacle() {
	throw EtatRobot::Exception(getNom(), "evaluerObstacle");
}

void EtatRobot::figer() {
	throw EtatRobot::Exception(getNom(), "figer");
}

void EtatRobot::repartir() {
	throw EtatRobot::Exception(getNom(), "repartir");
}