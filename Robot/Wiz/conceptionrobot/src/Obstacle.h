
#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "Objet.h"
#include <ostream>

class Obstacle
{
private:
    int hauteur;
    Objet *objet;
public:

    // Constructors/Destructors
    //  


    /**
     * Empty Constructor
     */
    Obstacle (int hauteur, Objet *o);

    /**
     * Empty Destructor
     */
    virtual ~Obstacle ( );

    /**
     * @return int
     */
    int getHauteur ( );
    
    Objet *getObjet ();

    friend std::ostream& operator<<(std::ostream& os, const Obstacle& obs);
};

#endif // OBSTACLE_H
