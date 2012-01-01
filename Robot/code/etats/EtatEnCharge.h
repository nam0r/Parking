#ifndef __ETAT_EN_CHARGE__
#define __ETAT_EN_CHARGE__

#include "EtatEnRoute.h"

class EtatEnCharge : public EtatEnRoute {
	private:
		static EtatEnCharge* _instance;
		EtatEnCharge();
	public:
		static EtatEnCharge* getInstance();

		virtual std::string getNom();

		virtual void avancer(int x, int y);
    	virtual void tourner(std::string direction);
    	virtual void rencontrerObstacle(Obstacle o);
    	virtual int peser();
};

#endif