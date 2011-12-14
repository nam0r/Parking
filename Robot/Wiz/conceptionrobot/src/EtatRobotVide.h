
#ifndef ETATROBOTVIDE_H
#define ETATROBOTVIDE_H

#include <string>

#include "EtatRobot.h"
#include "EnRoute.h"
#include "Singleton.h"

class EtatRobotVide : public EnRoute, public Singleton<EtatRobotVide>
{
	friend class Singleton<EtatRobotVide>;
public:
    void avancer ( Robot* r );
    void rencontrerObstacle ( Robot* r, Obstacle *o );
protected:
	EtatRobotVide ();
	virtual ~EtatRobotVide ( );
};

#endif // ETATROBOTVIDE_H
