#ifndef __ETAT_EN_CHARGE__
#define __ETAT_EN_CHARGE__

#include "EtatEnRoute.h"

class EtatEnCharge : public EtatEnRoute {
	private:
	public:
		void avancer(int x, int y);
    	void tourner(std::string direction);
    	void rencontrerObstacle(Obstacle o);
    	void peser();
};

#endif