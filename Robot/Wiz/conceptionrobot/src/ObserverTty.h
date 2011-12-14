#ifndef __OBSERVER_TTY__
#define __OBSERVER_TTY__

#include "Observer.h"

class ObserverTty : public Observer
{
private:
public:
    ObserverTty();
    virtual ~ObserverTty();

    virtual void changeEtat(EtatRobot* prec, EtatRobot* cur);
    virtual void bouge(Position& position);
    virtual void tourne(std::string& direction);
    virtual void saisit(Objet& o);
    virtual void rencontre(Obstacle* o);
    virtual void pose();
    virtual void pese(int);
    virtual void evalue(int);
    virtual void fige();
    virtual void repart();
};

#endif /*__OBSERVER_TTY__*/
