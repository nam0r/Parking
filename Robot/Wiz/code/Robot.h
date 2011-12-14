
#ifndef ROBOT_H
#define ROBOT_H

#include <string>
#include "Obstacle.h"
#include "Position.h"
#include "Objet.h"

class Robot;

#include "EtatRobot.h"


class Robot
{
public:

    // Constructors/Destructors
    //  


    /**
     * Empty Constructor
     */
    Robot ( );

    /**
     * Empty Destructor
     */
    virtual ~Robot ( );

    // Public attributes
    //  

    std::string direction;
    Obstacle pObstacle;
    Position position;
    Objet pObjet;

    // Public attribute accessor methods
    //  


    void setDirection ( std::string new_var );

    std::string getDirection ( );

    /**
     * Set the value of pObstacle
     * @param new_var the new value of pObstacle
     */
    void setPObstacle ( Obstacle new_var )     {
            pObstacle = new_var;
    }

    /**
     * Get the value of pObstacle
     * @return the value of pObstacle
     */
    Obstacle getPObstacle ( )     {
        return pObstacle;
    }

    /**
     * Set the value of position
     * @param new_var the new value of position
     */
    void setPosition ( Position new_var );


    /**
     * Get the value of position
     * @return the value of position
     */
    Position getPosition ( );

    /**
     * Set the value of pObjet
     * @param new_var the new value of pObjet
     */
    void setObjet ( Objet new_var );

    /**
     * Get the value of pObjet
     * @return the value of pObjet
     */
    Objet getObjet ( );

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
    void figer ( );


    /**
     */
    void repartir ( );


    /**
     */
    void afficher ( );

protected:

public:

protected:

public:

protected:


private:

    // Private attributes
    //  

    EtatRobot *etat;
public:

private:

public:


    // Private attribute accessor methods
    //  


    /**
     * Set the value of etat
     * @param new_var the new value of etat
     */
    void setEtat(EtatRobot *new_var);

    /**
     * Get the value of etat
     * @return the value of etat
     */
    EtatRobot* getEtat();
private:
};

#endif // ROBOT_H
