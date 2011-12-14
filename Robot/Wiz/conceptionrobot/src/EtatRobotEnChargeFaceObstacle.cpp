#include "EtatRobotEnChargeFaceObstacle.h"  

EtatRobotEnChargeFaceObstacle::EtatRobotEnChargeFaceObstacle ()
{
}

EtatRobotEnChargeFaceObstacle::~EtatRobotEnChargeFaceObstacle ()
{
}

int EtatRobotEnChargeFaceObstacle::peser ( Robot* r )
{
    if(!r->getObjet())
        return 0;

    return r->getObjet()->getPoids();
}

void EtatRobotEnChargeFaceObstacle::poser ( Robot* r )
{
    r->setObjet(NULL);
    //robot->setEtat ( robot->factory.getEtat("EtatRobotVideFaceObstacle") );
    r->setEtat ( "EtatRobotVideFaceObstacle" );
    //r->getEtat ()->setRobot ( r );
}

void EtatRobotEnChargeFaceObstacle::rencontrerObstacle ( Robot* r, Obstacle *o )
{
    r->setObstacle(o);
    if(!o)
        r->setEtat ( "EtatRobotEnCharge" );
}
