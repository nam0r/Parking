#ifndef __ETAT_FIGE__
#define __ETAT_FIGE__

#include "EtatRobot.h"

class EtatFige : public EtatRobot {
	private:
		static EtatFige* _instance;
		EtatFige();
		EtatRobot* _dernierEtat;
	public:
		static EtatFige* getInstance();

		virtual void repartir();
		void setDernierEtat(EtatRobot * etat);
};

#endif