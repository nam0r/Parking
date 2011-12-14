#include "Fige.h"

// Constructors/Destructors
//  

Fige::Fige (EtatRobot* prec, Robot* robot) : EtatRobot(robot), etatPrecedent(prec) {
}

Fige::~Fige ( ) { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  


/**
 */
void Fige::repartir ( )
{
    robot->setEtat(etatPrecedent);
}
