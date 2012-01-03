#ifndef __ETAT_A_VIDE__
#define __ETAT_A_VIDE__

#include "EtatEnRoute.h"

class EtatAVide : public EtatEnRoute {
	private:
		static EtatAVide* _instance;
		EtatAVide();
	public:
		static EtatAVide* getInstance();

		virtual void avancer(int x, int y);
    	virtual void tourner(std::string direction);
    	virtual void rencontrerObstacle(Obstacle o);
};

#endif