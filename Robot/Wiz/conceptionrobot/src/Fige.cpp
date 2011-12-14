#include "Fige.h"

Fige::Fige ()
{
}

Fige::~Fige ( )
{
}

void Fige::repartir ( Robot* r )
{
    r->setEtat ( r->getEtatPrec () );
    //robot->setEtatToEtatPrecedent ();
}
