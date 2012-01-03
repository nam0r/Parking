#ifndef __ROBOT__
#define __ROBOT__

#include <string>
#include "RobotAbstrait.h"
#include "Position.h"
#include "Objet.h"
#include "Obstacle.h"
#include "etats/EtatRobot.h"

class Robot : public RobotAbstrait {

  private:
    Position _position;
    std::string _direction;
    EtatRobot _etat;

  public:
    Robot();
    void avancer(int x, int y);
    void tourner(std::string direction);
    void saisir(Objet o);
    void poser();
    int peser();
    void rencontrerObstacle(Obstacle o);
    int evaluerObstacle();
    void figer();
    void repartir();
    void afficher();
    //void changerEtat(EtatRobot * nouvelEtat);

    // Getters
    Position getPosition();
    std::string getDirection();
    EtatRobot * getEtat();
};

#endif
