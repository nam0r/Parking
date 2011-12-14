#include "RobotObservable.h"

RobotObservable::RobotObservable()
{
}

RobotObservable::~RobotObservable()
{
}

void RobotObservable::addObserver(Observer* obs)
{
    observers.push_back(obs);
}

void RobotObservable::removeObserver(Observer* obs)
{
    observers.erase(std::find(observers.begin(), observers.end(), obs));
}

void RobotObservable::notifierAvancer(Position& position)
{
    for(std::vector<Observer*>::iterator it = observers.begin(); it != observers.end(); it++)
        (*it)->bouge(position);
}

void RobotObservable::notifierTourner(std::string direction)
{
    for(std::vector<Observer*>::iterator it = observers.begin(); it != observers.end(); it++)
        (*it)->tourne(direction);
}

void RobotObservable::notifierSaisit(Objet& obj)
{
    for(std::vector<Observer*>::iterator it = observers.begin(); it != observers.end(); it++)
        (*it)->saisit(obj);
}

void RobotObservable::notifierPose()
{
    for(std::vector<Observer*>::iterator it = observers.begin(); it != observers.end(); it++)
        (*it)->pose();
}

void RobotObservable::notifierPese(int poids)
{
    for(std::vector<Observer*>::iterator it = observers.begin(); it != observers.end(); it++)
        (*it)->pese(poids);
}

void RobotObservable::notifierRencontre(Obstacle* obs)
{
    for(std::vector<Observer*>::iterator it = observers.begin(); it != observers.end(); it++)
        (*it)->rencontre(obs);
}

void RobotObservable::notifierEvalue(int hauteur)
{
    for(std::vector<Observer*>::iterator it = observers.begin(); it != observers.end(); it++)
        (*it)->evalue(hauteur);
}

void RobotObservable::notifierFige()
{
    for(std::vector<Observer*>::iterator it = observers.begin(); it != observers.end(); it++)
        (*it)->fige();
}

void RobotObservable::notifierRepart()
{
    for(std::vector<Observer*>::iterator it = observers.begin(); it != observers.end(); it++)
        (*it)->repart();
}

void RobotObservable::notifierChangeEtat(EtatRobot* prec, EtatRobot* nouv)
{
    for(std::vector<Observer*>::iterator it = observers.begin(); it != observers.end(); it++)
        (*it)->changeEtat(prec, nouv);
}
