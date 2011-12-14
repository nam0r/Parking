#include "EtatRobotEnChargeFaceObstacle.h"

// Constructors/Destructors
//  

EtatRobotEnChargeFaceObstacle::EtatRobotEnChargeFaceObstacle ( ) {
}

EtatRobotEnChargeFaceObstacle::~EtatRobotEnChargeFaceObstacle ( ) { }

//  
// Methods
//  



// Other methods
//  


/**
 * @return int
 */
int EtatRobotEnChargeFaceObstacle::peser ( )
{
    if(!robot.getObjet())
        return 0;

    return robot.getObjet().getPoids();
}


/**
 */
void EtatRobotEnChargeFaceObstacle::poser ( )
{
    robot.setObjet(NULL);
}
