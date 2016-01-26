#include <iostream>

#include <fstream>

using namespace std;


int main()
{

	int nbrepas;
	int test;

	struct Horaire 
	{
		int heure;
		int minute;
	};


	struct repas 
	{
		int nbRation;
		Horaire horaire;
	};

	repas tabRepas[5]; // creation d'un tableau de repas

	ifstream flux("exemple_fichier_param.txt");

	if (flux)
	{
		flux >> nbrepas; // recuperation du nombre de repas

		
		for (int i = 0; i <= nbrepas; i++)
		{
			flux >> tabRepas[i].horaire.heure; // recuperation de l'heure du i^eme repas
			flux.seekg(1, ios::cur);//on saute les ":" du fichier pour passer au minutes
			flux >> tabRepas[i].horaire.minute; // recuperation de la minute du i^eme repas
			flux >> tabRepas[i].nbRation; // recuperation du nombre de rations du i^eme repas 
		}
		
	}
	else
	{
		cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
	}

}