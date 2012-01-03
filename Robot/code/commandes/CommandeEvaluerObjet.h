#ifndef __COMMANDE_EVALUER_OBJET__
#define __COMMANDE_EVALUER_OBJET__

#include "Appel.h"

class CommandeEvaluerObjet : public Appel {

	private:
        CommandeEvaluerObjet();
	public:
		virtual void execute();
		virtual bool estReversible();
		virtual void annule();
};

#endif
