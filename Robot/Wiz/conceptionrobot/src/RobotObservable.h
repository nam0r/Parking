#ifndef __ROBOTOBSERVABLE__
#define __ROBOTOBSERVABLE__

#include <iostream>
#include <vector>
#include <algorithm>

class RobotObservable;

#include "Observer.h"
#include "Position.h"
#include "Objet.h"

class RobotObservable
{
protected:
    std::vector<Observer*> observers;
public:
    RobotObservable();
    virtual ~RobotObservable();

    void addObserver(Observer* obs);
    void removeObserver(Observer* obs);

    void notifierAvancer(Position& position);
    void notifierTourner(std::string direction);
    void notifierSaisit(Objet& obj);
    void notifierPose();
    void notifierPese(int);
    void notifierRencontre(Obstacle* obs);
    void notifierEvalue(int);
    void notifierFige();
    void notifierRepart();
    void notifierChangeEtat(EtatRobot* prec, EtatRobot* nouv);
};

#endif /*__ROBOTOBSERVABLE__*/
