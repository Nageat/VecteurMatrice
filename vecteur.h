#include<iostream>
#include "Matrice.h"

using namespace std;

class matrice;

class vecteur {

public:
	int nTab[3];
	vecteur();
	~vecteur();
	void display(int nTab[]);
	friend vecteur rodeMembre(Matrice, vecteur);//Ami membre 
};

