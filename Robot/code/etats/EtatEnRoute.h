#ifndef __ETAT_EN_ROUTE__
#define __ETAT_EN_ROUTE__

#include "EtatRobot.h"

class EtatEnRoute : public EtatRobot {
	protected:
		EtatEnRoute(std::string nom);
	public:
		virtual void figer();
};

#endif