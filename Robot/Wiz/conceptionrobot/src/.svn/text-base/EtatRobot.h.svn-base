#ifndef ETATROBOT_H
#define ETATROBOT_H

#include <string>
#include <exception>
#include <map>

class EtatRobot;
class Robot;

#include "Robot.h"


class EtatRobot
{
	
protected:
	EtatRobot ();
	virtual ~EtatRobot ( ) /*= 0*/;
	
public:
    class ExceptionInvalidAction : public std::exception
    {
    };
    


    // Constructors/Destructors
    //  

	//EtatRobot (Robot *_robot);

    /**
     * Empty Destructor
     */
    


    /**
     */
    virtual void avancer ( Robot* r );


    /**
     * @param  direction
     */
    virtual void tourner ( Robot* r, std::string direction );


    /**
     * @param  o
     */
    virtual void saisir ( Robot* r);


    /**
     */
    virtual void poser ( Robot* r );


    /**
     * @return int
     */
    virtual int peser ( Robot* r );


    /**
     * @param  o
     */
    virtual void rencontrerObstacle ( Robot* r, Obstacle *o );


    /**
     * @return int
     */
    virtual int evaluerObstacle ( Robot* r );


    /**
     */
    virtual void figer ( Robot* r );


    /**
     */
    virtual void repartir ( Robot* r );


    //void setRobot ( Robot* _robot );
    
    
    static void enregistrer ( std::string nom, EtatRobot* etat );
    static EtatRobot* getEtat ( std::string nom );
    
    //static void operation ( void (*f)(EtatRobot*,void*), void* val );
    
    static void initialiserListe ();

    void setName(std::string);
    friend std::ostream& operator<<(std::ostream& os, const EtatRobot& etat);
    
protected:

    // Private attributes
    //  

    //Robot* robot;
    std::string name;
    
    
private:
    /**
     * Empty Constructor
     */
    
    
    static std::map < std::string, EtatRobot* > etats;

};

#endif // ETATROBOT_H
