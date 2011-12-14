#ifndef __OBSERVER__
#define __OBSERVER__

class Observer;

class EtatRobot;
//#include "EtatRobot.h"
#include "Position.h"
#include "Objet.h"
#include "Obstacle.h"

class Observer
{
private:
public:
    Observer();
    virtual ~Observer();

    virtual void changeEtat(EtatRobot* prec, EtatRobot* cur) = 0;
    virtual void bouge(Position& position) = 0;
    virtual void tourne(std::string& direction) = 0;
    virtual void saisit(Objet& o) = 0;
    virtual void pose() = 0;
    virtual void pese(int) = 0;
    virtual void evalue(int) = 0;
    virtual void fige() = 0;
    virtual void repart() = 0;
    virtual void rencontre(Obstacle* o) = 0;
};

#endif /*__OBSERVER__*/
