#include "EtatRobotEnCharge.h"

// Constructors/Destructors
//  

EtatRobotEnCharge::EtatRobotEnCharge ( ) {
}

EtatRobotEnCharge::~EtatRobotEnCharge ( ) { }

//  
// Methods
//  



// Other methods
//  


/**
 */
void EtatRobotEnCharge::avancer ( )
{
    Position pos = robot.getPosition();
    
    if(direction == "N")
        pos.setY(pos.getY() - 1);
    else if(direction == "S")
        pos.setY(pos.getY() + 1);
    else if(direction == "O")
        pos.setX(pos.getX() - 1);
    else if(direction == "E")
        pos.setX(pos.getX() + 1);

    robot.setPosition(pos);
}


/**
 * @return int
 */
int EtatRobotEnCharge::peser ( )
{
    return robot.getObjet().getPoids();
}


/**
 * @param  o
 */
void EtatRobotEnCharge::rencontrerObstacle (Obstacle o )
{
    robot.setObstacle(o);
    robot.setEtat(EtatRobotEnChargeFaceObstacle());
}
