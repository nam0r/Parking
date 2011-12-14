
#ifndef OBSTACLE_H
#define OBSTACLE_H

class Obstacle
{
private:
    int hauteur;
public:

    // Constructors/Destructors
    //  


    /**
     * Empty Constructor
     */
    Obstacle (int hauteur);

    /**
     * Empty Destructor
     */
    virtual ~Obstacle ( );

    /**
     * @return int
     */
    int getHauteur ( );
};

#endif // OBSTACLE_H
