#include "Robot.h"
#include "AfficheurConsole.h"

int main() {
	Robot robot;
	AfficheurConsole console(&robot);
	robot.attache(&console);

	robot.repartir();
}