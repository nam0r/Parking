#include <iostream>
#include <map>
#include <string>

//#include "Singleton.h"

using namespace std;


template<typename T> class Singleton
{
	public:
	static T& getInstance()
	{
		static T theSingleInstance; // suppose que T a un constructeur par défaut
		return theSingleInstance;
	}
};

class A
{
	// constructeurs/destructeur de A accessibles au Singleton
    //friend class Singleton<A>;
	protected:
	int data;
	A () {};
	//public:
	virtual ~A() {};
	public:
	int getData () { return data; }
	void setData ( int v ) { data = v; }
};

class B : public A
{
	protected:
	B () {};
	//public:
	virtual ~B() {};
};

class C : public B, public Singleton<C>
{
	friend class Singleton<C>;
	protected:
	C () {};
	virtual ~C() {};
};

class D : public B, public Singleton<D>
{
	friend class Singleton<D>;
	protected:
	D () {};
	virtual ~D() {};
};

int main ()
{
	cout << &(C::getInstance ()) << endl;
	cout << &(D::getInstance ()) << endl;
	
	map<string,A*> m;
	m.insert ( pair<string,A*> ( string ( "c" ), static_cast<A*>(&(C::getInstance()) ) ) );
	m.insert ( pair<string,A*> ( string ( "d" ), static_cast<A*>(&(D::getInstance()) ) ) );
	m.find ( "c" )->second->setData ( 0 );
	m.find ( "d" )->second->setData ( 1 );
	for ( map<string,A*>::iterator it = m.begin (); it != m.end (); ++it )
	{
		cout << (it->second) << " " << it->second->getData () << endl;
	}
	
	return 0;
}
