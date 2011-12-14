#include "EtatRobotVide.h"

// Constructors/Destructors
//  

EtatRobotVide::EtatRobotVide (Robot* robot) : EnRoute(robot) {
}

EtatRobotVide::~EtatRobotVide ( ) { }

//  
// Methods
//  



// Other methods
//  


/**
 */
void EtatRobotVide::avancer ( )
{
    Position pos = robot->getPosition();
    
    if(robot->getDirection() == "N")
        pos.setY(pos.getY() - 1);
    else if(robot->getDirection() == "S")
        pos.setY(pos.getY() + 1);
    else if(robot->getDirection() == "O")
        pos.setX(pos.getX() - 1);
    else if(robot->getDirection() == "E")
        pos.setX(pos.getX() + 1);

    robot->setPosition(pos);
}


/**
 * @param  o
 */
void EtatRobotVide::rencontrerObstacle (Obstacle o )
{
    robot->setObstacle(o);
    robot->setEtat(new EtatRobotVideFaceObstacle(robot));
}
