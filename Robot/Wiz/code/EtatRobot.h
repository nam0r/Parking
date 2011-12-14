#ifndef ETATROBOT_H
#define ETATROBOT_H

#include <string>
#include <exception>

class EtatRobot;

#include "Robot.h"

class EtatRobot
{
public:
    class ExceptionInvalidAction : public std::exception
    {
    };


    // Constructors/Destructors
    //  


    /**
     * Empty Constructor
     */
    EtatRobot (Robot* robot);

    /**
     * Empty Destructor
     */
    virtual ~EtatRobot ( );



    /**
     */
    void avancer ( );


    /**
     * @param  direction
     */
    void tourner (std::string direction );


    /**
     * @param  o
     */
    void saisir (Objet o );


    /**
     */
    void poser ( );


    /**
     * @return int
     */
    int peser ( );


    /**
     * @param  o
     */
    void rencontrerObstacle (Obstacle o );


    /**
     * @return int
     */
    int evaluerObstacle ( );


    /**
     */
    void figer (EtatRobot &etat );


    /**
     */
    void repartir ( );


    /**
     */
    void afficher ( );
protected:

    // Private attributes
    //  

    Robot* robot;
};

#endif // ETATROBOT_H
