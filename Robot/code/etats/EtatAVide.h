#ifndef __ETAT_A_VIDE__
#define __ETAT_A_VIDE__

#include "EtatEnRoute.h"

class EtatAVide : public EtatEnRoute {
	private:
	public:
		void avancer(int x, int y);
    	void tourner(std::string direction);
    	void rencontrerObstacle(Obstacle o);
};

#endif