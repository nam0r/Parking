#ifndef __ETAT_FIGE__
#define __ETAT_FIGE__

#include "EtatRobot.h"

class EtatFige : public EtatRobot {
	private:
		static EtatFige* _instance;
		EtatFige();
	public:
		static EtatFige* getInstance();
		
		virtual std::string getNom();

		virtual void repartir();
};

#endif