#include "Robot.h"

// Constructors/Destructors
//  

Robot::Robot ( ) {
initAttributes();
}

Robot::~Robot ( ) { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  


/**
 */
void Robot::avancer ( )
{
    etat.avancer();
}


/**
 * @param  direction
 */
void Robot::tourner (string direction )
{
    etat.tourner(direction);
}


/**
 * @param  o
 */
void Robot::saisir (Objet o )
{
    etat.saisir(o);
}


/**
 */
void Robot::poser ( )
{
    etat.poser();
}


/**
 * @return int
 */
int Robot::peser ( )
{
    return etat.peser();
}


/**
 * @param  o
 */
void Robot::rencontrerObstacle (Obstacle o )
{
    etat.rencontrerObstacle(o);
}


/**
 * @return int
 */
int Robot::evaluerObstacle ( )
{
    return etat.evaluerObstacle();
}


/**
 */
void Robot::figer ( )
{
    etat.figer();
}


/**
 */
void Robot::repartir ( )
{
    etat.repartir();
}


/**
 */
void Robot::afficher ( )
{
    etat.afficher();
}

void Robot::setEtat ( EtatRobot* new_var )     {
    etat = new_var;
}

EtatRobot* Robot::getEtat ( )     {
    return etat;
}

void Robot:setObjet ( Objet new_var )     {
    pObjet = new_var;
}

Objet Robot::getObjet ( )     {
    return pObjet;
}

void Robot::setPosition ( Position new_var )     {
    position = new_var;
}

Position Robot::getPosition ( )     {
    return position;
}

void Robot::setDirection ( std::string new_var )     {
    direction = new_var;
}

std::string Robot::getDirection ( )     {
    return direction;
}
