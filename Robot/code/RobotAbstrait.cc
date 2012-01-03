#include "RobotAbstrait.h"

using namespace std;

/*
template <typename Obs>
void RobotAbstrait::attache(Obs * obs) {
	RobotObservateur * ro = dynamic_cast<RobotObservateur*>(obs);
	if(ro == NULL) {
		cerr << "You are trying to set a non-RobotObservateur object as observer." << endl;
		exit(EXIT_FAILURE);
	}
	_observateurs.push_back(ro);
}

template <typename Obs>
void RobotAbstrait::detache(Obs * obs) {
	RobotObservateur * ro = dynamic_cast<RobotObservateur*>(obs);
	if(ro == NULL) {
		cerr << "You are trying to remove a non-RobotObservateur object from observers." << endl;
		exit(EXIT_FAILURE);
	}
	remove(_observateurs.begin(), _observateurs.end(), ro);
}

void RobotAbstrait::notifie() {
	for_each(_observateurs.begin(), _observateurs.end(), mem_fun(&RobotObservateur::miseAJour));
}
*/