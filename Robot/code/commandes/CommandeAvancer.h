#ifndef __COMMANDE_AVANCER__
#define __COMMANDE_AVANCER__

#include "Appel.h"

class CommandeAvancer : public Appel {

	private:
        CommandeAvancer();
	public:
		virtual void execute();
		virtual bool estReversible();
		virtual void annule();
};

#endif
