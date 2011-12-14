
#ifndef ETATROBOTVIDE_H
#define ETATROBOTVIDE_H
#include "EtatRobot.h"
#include "EnRoute.h"

#include <string>
class EtatRobotVide : public EnRoute
{
public:

    // Constructors/Destructors
    //  


    /**
     * Empty Constructor
     */
    EtatRobotVide (Robot* robot);

    /**
     * Empty Destructor
     */
    virtual ~EtatRobotVide ( );



    /**
     */
    void avancer ( );


    /**
     * @param  o
     */
    void rencontrerObstacle (Obstacle o );
};

#endif // ETATROBOTVIDE_H
