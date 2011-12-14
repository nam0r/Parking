//#include <iostream> // DEBUG

#include "EtatRobotVide.h"
#include "EtatRobotVideFaceObstacle.h"


EtatRobotVide::EtatRobotVide ()
{
}

EtatRobotVide::~EtatRobotVide ()
{
}

void EtatRobotVide::avancer ( Robot* r )
{
    Position pos = r->getPosition ();
    std::string dir = r->getDirection ();
    if ( dir == "N" )
        pos.setY ( pos.getY () - 1 );
    else if ( dir == "S" )
        pos.setY ( pos.getY () + 1 );
    else if ( dir == "O" )
        pos.setX ( pos.getX () - 1 );
    else if ( dir == "E" )
        pos.setX ( pos.getX () + 1 );

    r->setPosition ( pos );
}

void EtatRobotVide::rencontrerObstacle ( Robot* r, Obstacle *o )
{
    if(o)
    {
        r->setObstacle(o);
        r->setEtat ( "EtatRobotVideFaceObstacle" );
    }
}
