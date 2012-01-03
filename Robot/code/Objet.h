#ifndef __OBJET__
#define __OBJET__

class Objet {
	private:
		int _poids;

	public:
		Objet(int poids = 0);
		int getPoids();
};

#endif