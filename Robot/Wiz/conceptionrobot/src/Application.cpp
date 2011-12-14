#include <iostream>
#include <string>

#include "Robot.h"
#include "ObserverTty.h"
//~ #include "FactoryEtats.h"
//~ #include "EtatRobotVide.h"
//~ #include "EtatRobotEnCharge.h"
//~ #include "EtatRobotEnChargeFaceObstacle.h"
//~ #include "EtatRobotVideFaceObstacle.h"
//~ #include "Fige.h"

using namespace std;

int main(int argc, char *argv[])
{
    ObserverTty observer;
    Robot robot;

    Objet obj = Objet ( 4 );
    Obstacle obs = Obstacle ( 42, &obj );

    robot.addObserver(&observer);
	robot.tourner ( string("N") );
	robot.avancer ();
	robot.avancer ();
	robot.tourner ( string ("O") );
	robot.avancer ();
	robot.rencontrerObstacle ( &obs ); 
    robot.evaluerObstacle();
    robot.saisir(obj);
    robot.tourner("S");
	robot.figer ();
	robot.repartir ();
    robot.poser();
    robot.tourner("O");
	robot.rencontrerObstacle (NULL); 
    robot.avancer();

    return 0;
}
