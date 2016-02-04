
#include "ParametresRepas.h"

int main()
{
	
	
	ifstream* fluxFichier = new ifstream("exemple_fichier_param.txt");
	ParametresRepas objet;
	int nbRepas;
	Repas tabRep[5];
	bool test = 0;

	test = objet.TraitementFichier(fluxFichier); //stock les données dans les attribut de la classe 

	nbRepas = objet.GetNbRepas(); // recupere dans la variable du main le nb de repas

	for (int i = 0; i < nbRepas; i++)
	{
		tabRep[i] = objet.GetTabRepas(i); // recupere dans la variable du main les repas contenu dans la classe
	}
	
	cout << tabRep[2].horaire.heure << ":" << tabRep[2].horaire.minute << endl;
}

