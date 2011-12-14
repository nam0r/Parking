
#ifndef ENROUTE_H
#define ENROUTE_H

#include <string>
#include "EtatRobot.h"
#include "Fige.h"

class EnRoute : public EtatRobot
{
public:

    // Constructors/Destructors
    //  


    /**
     * Empty Constructor
     */
    EnRoute (Robot* robot);

    /**
     * Empty Destructor
     */
    virtual ~EnRoute ( );



    /**
     * @param  etat
     */
    void figer (EtatRobot* etat );


    /**
     * @param  direction
     */
    void tourner (std::string direction );

protected:

public:

protected:

public:

protected:


private:

public:

private:

public:

private:



};

#endif // ENROUTE_H
