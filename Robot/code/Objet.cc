#include "Objet.h"

Objet::Objet(int poids) {
	_poids = poids;
}

int Objet::getPoids() {
	return _poids;
}