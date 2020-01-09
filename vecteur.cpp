#include "vecteur.h"

vecteur::vecteur()
{
	for (int i = 0; i < 3; i++)
		nTab[i] = 0;
}
void vecteur::display(int nTab[])
{
	cout << "(" << nTab[0] << "," << nTab[1] << "," << nTab[2] << ")" << endl;
}

vecteur::~vecteur()
{
}


vecteur rodeMembre(Matrice, vecteur)
{
	vecteur vect;
	for (int i = 0; i < 3; i++)
	{
		vect.nTab[i] = 0;
		for (int j = 0; j < 3; j++) {
			vect.nTab[i] ++;
		}
	}
	return vect;
}
