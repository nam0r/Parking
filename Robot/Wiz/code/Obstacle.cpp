#include "Obstacle.h"

// Constructors/Destructors
//  

Obstacle::Obstacle (int h) : hauteur(h) {
}

Obstacle::~Obstacle ( ) { }

/**
 * @return int
 */
int Obstacle::getHauteur ( )
{
    return hauteur;
}
