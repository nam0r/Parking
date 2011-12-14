
#ifndef FIGE_H
#define FIGE_H
#include "EtatRobot.h"

class Fige : public EtatRobot
{
public:

    // Constructors/Destructors
    //  


    /**
     * Empty Constructor
     */
    Fige (EtatRobot* prec, Robot* robot);

    /**
     * Empty Destructor
     */
    virtual ~Fige ( );



    /**
     */
    void repartir ( );

protected:

public:

protected:

public:

protected:


private:

    // Private attributes
    //  

    EtatRobot* etatPrecedent;
};

#endif // FIGE_H
