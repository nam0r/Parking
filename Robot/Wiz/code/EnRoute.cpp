#include "EnRoute.h"

// Constructors/Destructors
//  

EnRoute::EnRoute (Robot* robot) : EtatRobot(robot) {
}

EnRoute::~EnRoute ( ) { }

//  
// Methods
//  



// Other methods
//  


/**
 * @param  prec_etat
 */
void EnRoute::figer (EtatRobot* prec_etat )
{
    robot->setEtat(new Fige(prec_etat, robot)); //TODO: FIXME: delete the new
}


/**
 * @param  nouv_direction
 */
void EnRoute::tourner (std::string nouv_direction)
{
    robot->setDirection(nouv_direction);
}
