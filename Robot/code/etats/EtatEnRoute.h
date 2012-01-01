#ifndef __ETAT_EN_ROUTE__
#define __ETAT_EN_ROUTE__

#include "EtatRobot.h"

class EtatEnRoute : public EtatRobot {
	private:
	public:
		virtual void figer();

		virtual std::string getNom() = 0;
};

#endif