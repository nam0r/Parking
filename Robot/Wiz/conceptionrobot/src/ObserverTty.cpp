#include "ObserverTty.h"
#include "EtatRobot.h"

#include <iostream>

ObserverTty::ObserverTty()
{
    std::cout << "Observeur prêt" << std::endl;
}

ObserverTty::~ObserverTty()
{
}

void ObserverTty::changeEtat(EtatRobot* prec, EtatRobot* cur)
{
    std::cout << "Passe de l'état " << (*prec) << " à " << (*cur) << "." << std::endl;
}

void ObserverTty::bouge(Position& position)
{
    std::cout << "S'est déplacé vers " << position << std::endl;
}

void ObserverTty::tourne(std::string& direction)
{
    std::cout << "S'est tourné vers " << direction << std::endl;
}

void ObserverTty::saisit(Objet& o)
{
    std::cout << "Saisit l'objet " << o << std::endl;
}

void ObserverTty::rencontre(Obstacle* o)
{
    if(o)
        std::cout << "Rencontre l'obstacle " << *o << std::endl;
    else
        std::cout << "N'a plus d'obstacle devant" << std::endl;
}

void ObserverTty::pose()
{
    std::cout << "Pose l'objet" << std::endl;
}

void ObserverTty::pese(int poids)
{
    std::cout << "Pese l'objet => " << poids << std::endl;
}

void ObserverTty::evalue(int hauteur)
{
    std::cout << "Evalue l'obstacle => " << hauteur << std::endl;
}

void ObserverTty::fige()
{
    std::cout << "Se fige" << std::endl;
}

void ObserverTty::repart()
{
    std::cout << "Repart" << std::endl;
}
