#include "EtatRobotVideFaceObstacle.h"

EtatRobotVideFaceObstacle::EtatRobotVideFaceObstacle ()
{
}

EtatRobotVideFaceObstacle::~EtatRobotVideFaceObstacle ()
{
}

int EtatRobotVideFaceObstacle::evaluerObstacle ( Robot* r )
{
    return r->getObstacle ()->getHauteur ();
}

void EtatRobotVideFaceObstacle::saisir ( Robot* r )
{
    r->setObjet ( r->getObstacle ()->getObjet () );
    r->setEtat ( "EtatRobotEnChargeFaceObstacle" );
}

void EtatRobotVideFaceObstacle::rencontrerObstacle ( Robot* r, Obstacle *o )
{
    r->setObstacle(o);
    if(!o)
        r->setEtat ( "EtatRobotVide" );
}
