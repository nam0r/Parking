#include "Robot.h"
#include "AfficheurConsole.h"

using namespace std;

int main() {
	Robot robot;
	AfficheurConsole console(&robot);
	robot.attache(&console);

	Obstacle *o;
	Objet *ob;

	robot.figer();
	robot.repartir();
	robot.avancer(2, 3);
	robot.tourner("W");
	
	//interdit
	try {
		robot.peser();
	} catch(exception &e) {
		cerr << e.what() << endl;
	}
	
	robot.rencontrerObstacle(o);
	
	robot.evaluerObstacle();
	robot.saisir(ob);
	robot.peser();
	robot.tourner("E");
	
	robot.avancer(7, 3);
	robot.tourner("W");
	robot.peser();
	
	robot.rencontrerObstacle(o);
	
	robot.poser();
	
    //interdit
	try {
		robot.rencontrerObstacle(o);
	} catch(exception &e) {
		cerr << e.what() << endl;
	}
	
}
