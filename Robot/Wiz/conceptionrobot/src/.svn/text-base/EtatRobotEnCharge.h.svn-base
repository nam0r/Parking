
#ifndef ETATROBOTENCHARGE_H
#define ETATROBOTENCHARGE_H
#include "EtatRobot.h"
#include "EnRoute.h"
#include "Singleton.h"

#include <string>
class EtatRobotEnCharge : public EnRoute, public Singleton<EtatRobotEnCharge>
{
	friend class Singleton<EtatRobotEnCharge>;
public:
    void avancer ( Robot* r );
    int peser ( Robot* r );
    void rencontrerObstacle ( Robot* r, Obstacle *o );
protected:
	EtatRobotEnCharge ();
	virtual ~EtatRobotEnCharge ( );
};

#endif // ETATROBOTENCHARGE_H
