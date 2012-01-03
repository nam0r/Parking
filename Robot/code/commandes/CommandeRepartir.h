#ifndef __COMMANDE_REPARTIR__
#define __COMMANDE_REPARTIR__

#include "Appel.h"

class CommandeRepartir : public Appel {

	private:
        CommandeRepartir();
	public:
		virtual void execute();
		virtual bool estReversible();
		virtual void annule();
};

#endif
