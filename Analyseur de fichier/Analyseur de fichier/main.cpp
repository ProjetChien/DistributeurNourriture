#include "TextParser.h"





int main()
{
	
	mg$ylu$tylufifstream file("exemple_fichier_param.txt");

	TextParser objet;
	int nbRepas;
	Repas tabRep[5];
	bool test = 0;

	test = objet.TraitementFichier(file);

	nbRepas = objet.GetNbRepas();

	for (int i = 0; i < nbRepas; i++)
	{
		tabRep[i] = objet.GetTabRepas(i);
	}


}