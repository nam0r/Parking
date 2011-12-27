#ifndef __ETAT_A_VIDE_FACE_OBSTACLE__
#define __ETAT_A_VIDE_FACE_OBSTACLE__

#include "EtatEnRoute.h"

class EtatAVideFaceObstacle : public EtatEnRoute {
	private:
	public:
		int evaluerObstacle();
		void tourner(std::string direction);
   		void saisir(Objet o);
};

#endif