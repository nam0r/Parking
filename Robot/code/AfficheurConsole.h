#ifndef __AFFICHEUR_CONSOLE__
#define __AFFICHEUR_CONSOLE__

#include <sstream>
#include "Robot.h"
#include "RobotObservateur.h"

class AfficheurConsole : public RobotObservateur {
	private:
		Robot * _robot;
	public:
		AfficheurConsole(Robot * robot);
		virtual void miseAJour();
};

#endif