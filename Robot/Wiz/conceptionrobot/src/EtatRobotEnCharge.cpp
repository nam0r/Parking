#include "EtatRobotEnCharge.h"
#include "EtatRobotEnChargeFaceObstacle.h"

EtatRobotEnCharge::EtatRobotEnCharge ()
{
}

EtatRobotEnCharge::~EtatRobotEnCharge ()
{
}

void EtatRobotEnCharge::avancer ( Robot* r )
{
    Position pos = r->getPosition ();
    
    std::string dir = r->getDirection ();
    
    if ( dir == "N" )
        pos.setY ( pos.getY () - 1 );
    else if ( dir == "S" )
        pos.setY ( pos.getY () + 1 );
    else if ( dir == "O")
        pos.setX ( pos.getX () - 1 );
    else if ( dir == "E")
        pos.setX ( pos.getX () + 1 );

    r->setPosition ( pos );
}

int EtatRobotEnCharge::peser ( Robot* r )
{
    return r->getObjet()->getPoids();
}

void EtatRobotEnCharge::rencontrerObstacle ( Robot* r, Obstacle *o )
{
    if(o)
    {
        r->setObstacle(o);
        r->setEtat ( "EtatRobotEnChargeFaceObstacle" );
    }
}
