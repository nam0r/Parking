
#ifndef FIGE_H
#define FIGE_H

#include "EtatRobot.h"
#include "Singleton.h"

class Fige : public EtatRobot, public Singleton<Fige>
{
	friend class Singleton<Fige>;
public:
    void repartir ( Robot* r );
	//void setEtatPrec ( EtatRobot *prec );
protected:
    Fige ();
    virtual ~Fige ();
    //EtatRobot* etatPrecedent;
};

#endif // FIGE_H
