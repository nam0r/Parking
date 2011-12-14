#include "Obstacle.h"

// Constructors/Destructors
//  

Obstacle::Obstacle (int h, Objet *o) : hauteur(h), objet(o) {
}

Obstacle::~Obstacle ( ) { }

/**
 * @return int
 */
int Obstacle::getHauteur ( )
{
    return hauteur;
}

Objet *Obstacle::getObjet ()
{
	return objet;
}

std::ostream& operator<<(std::ostream& os, const Obstacle& obs)
{
    return os << "(hauteur: " << obs.hauteur << ")";
}
