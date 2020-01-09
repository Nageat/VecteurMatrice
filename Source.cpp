#include<iostream>
#include "Matrice.h"
#include "vecteur.h"
using namespace std;

int Source()
{
	int pta[3] = {1,2,3};
	int ptb[3][3] = {{4,2,1},{8,7,0},{3,5,6} };
	vecteur Vect;
	Matrice Matr;

	cout << "Ceci est un vecteur : " << endl;
	Vect.display(pta);

	cout << endl << "Ceci est une matrice " << endl;
	Matr.display();


	vecteur res;
	cout << endl << "Appel avec la fonction rode independante: " << endl;
	res = Rodeindépendante(Matr, Vect);
	cout << "Le vecteur : " << endl;
	res.display(pta);

	return 0;
}

vecteur Rodeindépendante(Matrice, vecteur)
{
	vecteur MonSuperVecteur;
	for (int i = 0; i < 3; i++)
	{
		MonSuperVecteur.nTab[i] = 0;
		for (int j = 0; j < 3; j++) {
			MonSuperVecteur.nTab[i] * MonSuperVecteur.nTab[j];
		}
	}
	return MonSuperVecteur;
}
