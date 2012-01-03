#ifndef __ETAT_EN_CHARGE_FACE_OBSTACLE__
#define __ETAT_EN_CHARGE_FACE_OBSTACLE__

#include "EtatEnRoute.h"

class EtatEnChargeFaceObstacle : public EtatEnRoute {
	private:
		static EtatEnChargeFaceObstacle* _instance;
		EtatEnChargeFaceObstacle();
	public:
		static EtatEnChargeFaceObstacle* getInstance();

		virtual void tourner(std::string direction);
		virtual void poser();
    	virtual int peser();
};

#endif