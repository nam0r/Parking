#ifndef __LECTEUR_FICHIER__
#define __LECTEUR_FICHIER__

#include "Commande.h"
#include "Invocateur.h"

class LecteurFichier : public Invocateur {

	protected:

	public:
		LecteurFichier();
		void lire();
		int getInt();
		char getChar();
		Commande getCommande();
};

#endif
