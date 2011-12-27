#ifndef __ETAT_EN_CHARGE_FACE_OBSTACLE__
#define __ETAT_EN_CHARGE_FACE_OBSTACLE__

#include "EtatEnRoute.h"

class EtatEnChargeFaceObstacle : public EtatEnRoute {
	private:
	public:
		void tourner(std::string direction);
		void poser();
    	int peser();
};

#endif