#include <iostream> // DEBUG: à enlever quand tout marchera

#include "EnRoute.h"

EnRoute::EnRoute ()
{
}

EnRoute::~EnRoute ()
{
}

void EnRoute::figer ( Robot* r )
{
    //robot->setEtat(new Fige(prec_etat, robot)); //TODO: FIXME: delete the new
    r->setEtat ( "Fige" );
    // maintenant c'est fait automatiquement //robot->getEtat ()->setEtatPrec ( prec_etat );
}

void EnRoute::tourner ( Robot* r, std::string nouv_direction )
{
    r->setDirection(nouv_direction);
}


