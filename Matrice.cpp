#include "Matrice.h"
#include<iostream>

using namespace std;


Matrice::Matrice(int tab[][3])
{
	for (int y = 0; y < TAILLE; y++)
		for (int x = 0; x < TAILLE; x++)
			mMatrix[x][y] = tab[x][y];
}

Matrice::Matrice()
{
}

void Matrice::matrice()
{
	int x = 0;
	int y = 0;
	for (int x = 0; x < TAILLE; x++)
		for (int y = 0; y < TAILLE; y++)
			mMatrix[x][y] = 0;//Mise a 0 de la matrice 
}

void Matrice::display()
{
	int x = 0;
	int y = 0;
	for (int x = 0; x < TAILLE; x++)
	{
		for (int y = 0; y < TAILLE; y++)
			cout << mMatrix[x][y] << " ";//Affichage 
		cout << endl;
	}

}




Matrice::~Matrice()
{
}

