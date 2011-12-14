#include "EtatRobotVideFaceObstacle.h"

// Constructors/Destructors
//  

EtatRobotVideFaceObstacle::EtatRobotVideFaceObstacle ( ) {
}

EtatRobotVideFaceObstacle::~EtatRobotVideFaceObstacle ( ) { }

//  
// Methods
//  



// Other methods
//  


/**
 * @return int
 */
int EtatRobotVideFaceObstacle::evaluerObstacle ( )
{
    return robot.getObstacle().getHauteur();
}


/**
 */
void EtatRobotVideFaceObstacle::saisir ( )
{
    robot.setObjet(robot.getObstacle().getObjet());
}
