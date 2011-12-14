
#ifndef ETATROBOTVIDEFACEOBSTACLE_H
#define ETATROBOTVIDEFACEOBSTACLE_H
#include "EtatRobot.h"
#include "EnRoute.h"

#include <string>
class EtatRobotVideFaceObstacle : public EtatRobot, public EnRoute
{
public:

    // Constructors/Destructors
    //  


    /**
     * Empty Constructor
     */
    EtatRobotVideFaceObstacle ( );

    /**
     * Empty Destructor
     */
    virtual ~EtatRobotVideFaceObstacle ( );



    /**
     * @return int
     */
    int evaluerObstacle ( );


    /**
     */
    void saisir ( );

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

#endif // ETATROBOTVIDEFACEOBSTACLE_H
