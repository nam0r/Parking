#include "Objet.h"

// Constructors/Destructors
//  

Objet::Objet (int p) : poids(p) {
}

Objet::~Objet ( ) { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  


/**
 * @return int
 */
int Objet::getPoids ( )
{
    return poids;
}

std::ostream& operator<<(std::ostream& os, const Objet& obj)
{
    return os << "(poids: " << obj.poids << ")";
}
