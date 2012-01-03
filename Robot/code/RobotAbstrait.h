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

		void notifie() {
			for_each(_observateurs.begin(), _observateurs.end(), std::mem_fun(&RobotObservateur::miseAJour));
		}

	public:
		template <typename Obs>
		void attache(Obs * obs) {
			RobotObservateur * ro = dynamic_cast<RobotObservateur*>(obs);
			if(ro == NULL) {
				std::cerr << "You are trying to set a non-RobotObservateur object as observer." 
					<< std::endl;
				exit(EXIT_FAILURE);
			}
			_observateurs.push_back(ro);
		}

		template <typename Obs>
		void detache(Obs * obs) {
			RobotObservateur * ro = dynamic_cast<RobotObservateur*>(obs);
			if(ro == NULL) {
				std::cerr << "You are trying to remove a non-RobotObservateur object from observers." 
					<< std::endl;
				exit(EXIT_FAILURE);
			}
			remove(_observateurs.begin(), _observateurs.end(), ro);
		}
};

#endif