#ifndef __COMMANDE_FIGER__
#define __COMMANDE_FIGER__

#include "Appel.h"

class CommandeFiger : public Appel {

	private:
        CommandeFiger();
	public:
		virtual void execute();
		virtual bool estReversible();
		virtual void annule();
};

#endif
