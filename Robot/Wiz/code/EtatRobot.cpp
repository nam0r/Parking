#include "EtatRobot.h"

// Constructors/Destructors
//  

EtatRobot::EtatRobot (Robot* r) : robot(r) {
}

EtatRobot::~EtatRobot ( ) { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  


/**
 */
void EtatRobot::avancer ( )
{
    throw new ExceptionInvalidAction();
}


/**
 * @param  direction
 */
void EtatRobot::tourner (std::string direction )
{
    throw new ExceptionInvalidAction();
}


/**
 * @param  o
 */
void EtatRobot::saisir (Objet o )
{
    throw new ExceptionInvalidAction();
}


/**
 */
void EtatRobot::poser ( )
{
    throw new ExceptionInvalidAction();
}


/**
 * @return int
 */
int EtatRobot::peser ( )
{
    throw new ExceptionInvalidAction();
}


/**
 * @param  o
 */
void EtatRobot::rencontrerObstacle (Obstacle o )
{
    throw new ExceptionInvalidAction();
}


/**
 * @return int
 */
int EtatRobot::evaluerObstacle ( )
{
    throw new ExceptionInvalidAction();
}


/**
 */
void EtatRobot::figer (EtatRobot &etat)
{
    throw new ExceptionInvalidAction();
}


/**
 */
void EtatRobot::repartir ( )
{
    throw new ExceptionInvalidAction();
}


/**
 */
void EtatRobot::afficher ( )
{
    throw new ExceptionInvalidAction();
}
