
#ifndef OBJET_H
#define OBJET_H

#include <string>

class Objet
{
private:
    int poids;
public:

    // Constructors/Destructors
    //  
    /**
     * Empty Constructor
     */
    Objet(int poids = 0);

    /**
     * Empty Destructor
     */
    virtual ~Objet ( );

    /**
     * @return int
     */
    int getPoids ( );
};

#endif // OBJET_H
