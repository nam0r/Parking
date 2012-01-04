#ifndef __ETAT_ROBOT__
#define __ETAT_ROBOT__

#include <cstdlib>
#include <iostream>
#include <string>
#include <exception>
#include <map>
#include "../Position.h"
#include "../Objet.h"
#include "../Obstacle.h"

class EtatRobot {

	protected:
		EtatRobot(std::string nom);
		std::string _nom;
		static std::map<std::string, EtatRobot*> & _etats();
		static EtatRobot * _etatCourant;

	public:
		EtatRobot();
		virtual void avancer(int x, int y);
		virtual void tourner(std::string direction);
		virtual void saisir(Objet * o);
		virtual void poser();
		virtual int peser();
		virtual void rencontrerObstacle(Obstacle * o);
		virtual int evaluerObstacle();
		virtual void figer();
		virtual void repartir();

		static EtatRobot* getEtatCourant();
		static void changerEtat(std::string nom);

		std::string getNom();

		/* ********** *
		 * Exceptions *
		 * ********** */

		class Exception : public std::exception {
				public:
						Exception(std::string state, std::string method) {
							_state = state;
							_method = method;
						}
						virtual ~Exception() throw() {}
						virtual const char * what() const throw() {
							return ("Exception dans " + _state + "::" + _method).c_str();
						}
				protected:
						std::string _state;
						std::string _method;
		};
		 /*
		class Exception : public std::exception {
				public:
						Exception(std::string method, std::string msg) {
							_method = method;
							_msg = msg;
						}
						virtual ~Exception() throw() {}
						virtual const char * what() const throw() {
							return getNom() + ": " + _method + " -> " + _msg;
						}
				protected:
						std::string _method;
						std::string _msg;
		};

		class MouvementImpossibleException : public Exception {
			public:
				MouvementImpossibleException(std::string method) : 
					Exception(method, "mouvement impossible") {}
		};

		class ObjetAbsentException {
			public:
				ObjetAbsentException(std::string method) : 
					Exception(method, "objet absent") {}
		};
		class DejaChargeException {
			public:
				DejaChargeException(std::string method) : 
					Exception(method, "deja chargé") {}
		};
		class PasFaceAObstacleException {
			public:
				PasFaceAObstacleException(std::string method) : 
					Exception(method, "pas face à un obstacle") {}
		};
		*/
};

#endif
