#include <iostream> // DEBUG

#include "Robot.h"
#include "EtatRobotVide.h"
/*
void initFactory ( EtatRobot* e, void* val )
{
	e->setRobot ( static_cast<Robot*>(val) );
}
*/
Robot::Robot ()
{
	etat = NULL;
	setEtat ( EtatRobot::getEtat("initial") );
	//EtatRobot::operation ( initFactory, static_cast<void*>(this) );
}

Robot::~Robot ( ) { }


/**
 */
void Robot::avancer ( )
{
    etat->avancer(this);
    notifierAvancer(position);
}


/**
 * @param  direction
 */
void Robot::tourner ( std::string direction )
{
    etat->tourner ( this, direction );
    notifierTourner(direction);
}


/**
 * @param  o
 */
void Robot::saisir ( Objet o )
{
    etat->evaluerObstacle(this);
    etat->saisir ( this);
    notifierSaisit(o);
}


/**
 */
void Robot::poser ( )
{
    etat->poser ( this );
    notifierPose();
}


/**
 * @return int
 */
int Robot::peser ( )
{
    int hauteur = etat->peser(this);
    notifierPese(hauteur);
    return hauteur;
}


/**
 * @param  o
 */
void Robot::rencontrerObstacle ( Obstacle *o )
{
    etat->rencontrerObstacle ( this, o);
    notifierRencontre(o);
}


/**
 * @return int
 */
int Robot::evaluerObstacle ( )
{
    int hauteur = etat->evaluerObstacle(this);
    notifierEvalue(hauteur);
    return hauteur;
}


/**
 */
void Robot::figer ( )
{
    etat->figer( this );
    notifierFige();
}


/**
 */
void Robot::repartir ( )
{
    etat->repartir ( this );
    notifierRepart();
}

void Robot::setEtat ( std::string var )     {
    setEtat(EtatRobot::getEtat ( var ));
}

void Robot::setEtat ( EtatRobot *_etat )     {
    etatPrecedent = etat;
    etat = _etat;

    notifierChangeEtat(etatPrecedent, etat);
}

EtatRobot* Robot::getEtat ( )     {
    return etat;
}

void Robot::setObjet ( Objet *var )     {
    pObjet = var;
}

Objet *Robot::getObjet ( )     {
    return pObjet;
}

void Robot::setPosition ( Position var )     {
    position = var;
}

Position Robot::getPosition ( )     {
    return position;
}

void Robot::setDirection ( std::string var )     {
    direction = var;
}

std::string Robot::getDirection ( )     {
    return direction;
}

EtatRobot* Robot::getEtatPrec ()
{
	return etatPrecedent;
}
