#ifndef __ETAT_A_VIDE_FACE_OBSTACLE__
#define __ETAT_A_VIDE_FACE_OBSTACLE__

#include "EtatEnRoute.h"

class EtatAVideFaceObstacle : public EtatEnRoute {
	private:
		static EtatAVideFaceObstacle* _instance;
		EtatAVideFaceObstacle();
	public:
		static EtatAVideFaceObstacle* getInstance();

		virtual std::string getNom();

		virtual int evaluerObstacle();
		virtual void tourner(std::string direction);
   		virtual void saisir(Objet o);
};

#endif