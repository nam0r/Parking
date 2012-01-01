#ifndef __ETAT_ROBOT__
#define __ETAT_ROBOT__

#include <string>
#include "../Position.h"
#include "../Objet.h"
#include "../Obstacle.h"

class EtatRobot {

  protected:
    EtatRobot();

  public:
    virtual void avancer(int x, int y);
    virtual void tourner(std::string direction);
    virtual void saisir(Objet o);
    virtual void poser();
    virtual int peser();
    virtual void rencontrerObstacle(Obstacle o);
    virtual int evaluerObstacle();
    virtual void figer();
    virtual void repartir();

    virtual std::string getNom() = 0;

    class MouvementImpossibleException {};
    class ObjetAbsentException {};
    class DejaChargeException {};
    class PasFaceAObstacleException {};
};

#endif
