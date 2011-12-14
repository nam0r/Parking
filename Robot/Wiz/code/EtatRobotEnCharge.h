
#ifndef ETATROBOTENCHARGE_H
#define ETATROBOTENCHARGE_H
#include "EtatRobot.h"
#include "EnRoute.h"

#include <string>
class EtatRobotEnCharge : public EtatRobot, public EnRoute
{
public:

    // Constructors/Destructors
    //  


    /**
     * Empty Constructor
     */
    EtatRobotEnCharge ( );

    /**
     * Empty Destructor
     */
    virtual ~EtatRobotEnCharge ( );



    /**
     */
    void avancer ( );


    /**
     * @return int
     */
    int peser ( );


    /**
     * @param  o
     */
    void rencontrerObstacle (Obstacle o );

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

#endif // ETATROBOTENCHARGE_H
