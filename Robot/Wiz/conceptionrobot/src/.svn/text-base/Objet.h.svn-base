
#ifndef OBJET_H
#define OBJET_H

#include <string>
#include <ostream>

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

    friend std::ostream& operator<<(std::ostream& os, const Objet& obj);
};

#endif // OBJET_H
