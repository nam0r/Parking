#ifndef __ETAT_ROBOT__
#define __ETAT_ROBOT__

#include <string>
#include "../Position.h"
#include "../Objet.h"
#include "../Obstacle.h"

class EtatRobot {

  private:

  public:
    EtatRobot();
    void avancer(int x, int y);
    void tourner(std::string direction);
    void saisir(Objet o);
    void poser();
    int peser();
    void rencontrerObstacle(Obstacle o);
    int evaluerObstacle();
    void figer();
    void repartir();

    class MouvementImpossibleException;
    class ObjetAbsentException;
    class DejaChargeException;
    class PasFaceAObstacleException;
};

#endif
