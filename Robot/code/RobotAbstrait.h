#ifndef __ROBOT_ABSTRAIT__
#define __ROBOT_ABSTRAIT__

#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include "RobotObservateur.h"

class RobotAbstrait {
	protected:
		std::vector<RobotObservateur *> _observateurs;

		template <typename Obs>
		void attache(Obs * obs);

		template <typename Obs>
		void detache(Obs * obs);

		void notifie();
};

#endif