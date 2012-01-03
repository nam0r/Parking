#ifndef __COMMANDE_SAISIR__
#define __COMMANDE_SAISIR__

#include "Appel.h"

class CommandeSaisir : public Appel {

	private:
        CommandeSaisir();
	public:
		virtual void execute();
		virtual bool estReversible();
		virtual void annule();
};

#endif
