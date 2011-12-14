
#ifndef ETATROBOTVIDEFACEOBSTACLE_H
#define ETATROBOTVIDEFACEOBSTACLE_H

#include <string>

#include "EtatRobot.h"
#include "EnRoute.h"
#include "Singleton.h"

class EtatRobotVideFaceObstacle : public EnRoute, public Singleton<EtatRobotVideFaceObstacle>
{
	friend class Singleton<EtatRobotVideFaceObstacle>;
public:
    int evaluerObstacle ( Robot* r );
    void saisir ( Robot* r );
    void rencontrerObstacle ( Robot* r, Obstacle *o );
protected:
	EtatRobotVideFaceObstacle ();
	virtual ~EtatRobotVideFaceObstacle ( );
};

#endif // ETATROBOTVIDEFACEOBSTACLE_H
