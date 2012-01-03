#ifndef __COMMANDE_TOURNER__
#define __COMMANDE_TOURNER__

#include "Appel.h"

class CommandeTourner : public Appel {

	private:
        CommandeTourner();
	public:
		virtual void execute();
		virtual bool estReversible();
		virtual void annule();
};

#endif
