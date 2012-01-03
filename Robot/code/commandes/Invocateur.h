#ifndef __INVOCATEUR__
#define __INVOCATEUR__

#include "Commande.h"

class Invocateur {

	protected:

	public:
		Invocateur();
		virtual void lire();
		virtual int getInt();
		virtual char getChar();
		virtual Commande getCommande();
};

#endif
