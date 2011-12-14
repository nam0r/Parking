#ifndef __ROBOT__
#define __ROBOT__

#include <string>

class Robot {

  private:
    std::string direction;

  public:
    Robot();
    void avancer(int x, int y);
    void tourner(std::string direction);
    void saisir(Objet o);
    void poser();
    int peser();
    void recontrerObstacle(Obstacle o);
    int evaluerObstacle();
    void figer();
    void repartir();
    void afficher();
};

#endif
