#include "EtatRobot.h"

#include "EtatRobotEnCharge.h"
#include "EtatRobotEnChargeFaceObstacle.h"
#include "EtatRobotVide.h"
#include "EtatRobotVideFaceObstacle.h"

// Constructors/Destructors
//

std::map<std::string,EtatRobot*> EtatRobot::etats;

EtatRobot::EtatRobot ()
{
}

EtatRobot::~EtatRobot ( )
{
}

/**
 */
void EtatRobot::avancer ( Robot* r )
{
    throw new ExceptionInvalidAction();
}


/**
 * @param  direction
 */
void EtatRobot::tourner ( Robot* r, std::string direction )
{
    throw new ExceptionInvalidAction();
}


/**
 * @param  o
 */
void EtatRobot::saisir ( Robot* r)
{
    throw new ExceptionInvalidAction();
}


/**
 */
void EtatRobot::poser ( Robot* r )
{
    throw new ExceptionInvalidAction();
}


/**
 * @return int
 */
int EtatRobot::peser ( Robot* r )
{
    throw new ExceptionInvalidAction();
}


/**
 * @param  o
 */
void EtatRobot::rencontrerObstacle ( Robot* r, Obstacle *o )
{
    throw new ExceptionInvalidAction();
}


/**
 * @return int
 */
int EtatRobot::evaluerObstacle ( Robot* r )
{
    throw new ExceptionInvalidAction();
}


/**
 */
void EtatRobot::figer ( Robot* r )
{
    throw new ExceptionInvalidAction();
}


/**
 */
void EtatRobot::repartir ( Robot* r )
{
    throw new ExceptionInvalidAction();
}

/*
void EtatRobot::setRobot ( Robot* _robot )
{
	robot = _robot;
}
*/
void EtatRobot::enregistrer ( std::string nom, EtatRobot* etat )
{
    etat->setName(nom);
	etats.insert ( std::pair<std::string,EtatRobot*>(nom, etat) );
}

void EtatRobot::setName(std::string nom)
{
    name = nom;
}

void EtatRobot::initialiserListe ()
{
	etats.clear ();
	//EtatRobotVide *e1 = static_cast<EtatRobotVide*>(&(EtatRobotVide::getInstance ()));
	EtatRobotVide *e1 = &(EtatRobotVide::getInstance ());
	enregistrer ( "initial", e1 );
    enregistrer ( "EtatRobotEnCharge", &(EtatRobotEnCharge::getInstance ()) );
    enregistrer ( "EtatRobotEnChargeFaceObstacle", &(EtatRobotEnChargeFaceObstacle::getInstance ()) );
    enregistrer ( "EtatRobotVide", e1 );
    enregistrer ( "EtatRobotVideFaceObstacle", &(EtatRobotVideFaceObstacle::getInstance ()) );
    enregistrer ( "Fige", &(Fige::getInstance ()) );
}

EtatRobot* EtatRobot::getEtat ( std::string nom )
{
	if ( etats.size () == 0 )
		initialiserListe ();
	std::map<std::string,EtatRobot*>::iterator e = etats.find ( nom );
	if ( e == etats.end () )
		//return &(etats["initial"]);
		return (etats.find ("initial")->second);
	return (e->second);
}

/*
void EtatRobot::operation ( void (*f)(EtatRobot*,void*), void* val )
{
	for ( std::map<std::string,EtatRobot*>::iterator e = etats.begin ();
		e != etats.end (); ++e )
	{
		f ( e->second, val );
	}
}
*/

std::ostream& operator<<(std::ostream& os, const EtatRobot& etat)
{
    return os << etat.name;
}
