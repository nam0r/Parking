
#ifndef ETATROBOTENCHARGEFACEOBSTACLE_H
#define ETATROBOTENCHARGEFACEOBSTACLE_H

#include <string>

#include "EtatRobot.h"
#include "EnRoute.h"
#include "Singleton.h"

class EtatRobotEnChargeFaceObstacle : public EnRoute, public Singleton<EtatRobotEnChargeFaceObstacle>
{
	friend class Singleton<EtatRobotEnChargeFaceObstacle>;
public:
    int peser ( Robot* r );
    void poser ( Robot* r );
    void rencontrerObstacle ( Robot* r, Obstacle *o );
private:
	EtatRobotEnChargeFaceObstacle ();
	virtual ~EtatRobotEnChargeFaceObstacle ( );
};

#endif // ETATROBOTENCHARGEFACEOBSTACLE_H
