#pragma once
#include "vecteur.h"
class Matrice
{
	const static int TAILLE = 5;//Constante de taille 

public:
	int mMatrix[TAILLE][TAILLE];//Init de la matrice 
	Matrice(int tab[][3]);
	Matrice();
	void matrice();
	void display();
	~Matrice();

	friend vecteur rodeMembre(Matrice, vecteur);//Ami membre 
};

