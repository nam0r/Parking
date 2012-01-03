#ifndef __COMMANDE__
#define __COMMANDE__

#include <cstdlib>
#include <iostream>
#include <string>
#include <list>
#include <map>

class Commande {

	protected:
		std::map<std::string,Commande*> _commandes;
		std::list<Commande*> _cmdList;
		int _cmd;
		std::string _nom;
		std::list<std::string> _parametres;

	public:
		Commande();
		virtual void execute();
		virtual bool estReversible();
		virtual void annule();
        
        std::string getNom();

};

#endif
