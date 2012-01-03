#ifndef __COMMANDE_PESER_OBJET__
#define __COMMANDE_PESER_OBJET__

#include "Appel.h"

class CommandePeserObjet : public Appel {

	private:
        CommandePeserObjet();
	public:
		virtual void execute();
		virtual bool estReversible();
		virtual void annule();
};

#endif
