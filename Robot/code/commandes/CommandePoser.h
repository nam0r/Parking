#ifndef __COMMANDE_POSER__
#define __COMMANDE_POSER__

#include "Appel.h"

class CommandePoser : public Appel {

	private:
        CommandePoser();
	public:
		virtual void execute();
		virtual bool estReversible();
		virtual void annule();
};

#endif
