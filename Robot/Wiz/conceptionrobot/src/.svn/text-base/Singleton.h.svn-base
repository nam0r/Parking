// Singleton de Meyers, cf http://fr.wikipedia.org/wiki/Singleton_%28patron_de_conception%29#C.2B.2B
#ifndef __SINGLETON_H__
#define __SINGLETON_H__

template<typename T> class Singleton
{
	public:
	static T& getInstance()
	{
		static T theSingleInstance; // suppose que T a un constructeur par défaut
		return theSingleInstance;
	}
};

#endif
