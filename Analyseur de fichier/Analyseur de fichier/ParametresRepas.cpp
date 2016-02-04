
#include "ParametresRepas.h"

ParametresRepas::ParametresRepas()
{
}

ParametresRepas::~ParametresRepas()
{
}

bool ParametresRepas::TraitementFichier(ifstream* flux)
{
	if (flux)
	{
		*flux >> nbrepas; // reccuperation du nombre de repas


		for (int i = 0; i <= nbrepas; i++)
		{
			*flux >> tabRepas[i].horaire.heure; // recuperation de l'heure du i^eme repas
			*flux >> varBidon; //on stock les  ":" du fichier dans une variable inutilisé pour passer au minutes
			*flux >> tabRepas[i].horaire.minute; // recuperation de la minute du i^eme repas
			*flux >> tabRepas[i].nbRation; // recuperation du nombre de rations du i^eme repas 
		}
		return true;
	}
	else
	{
		return false;
	}
}

int ParametresRepas::GetNbRepas()
{
	return nbrepas;
}

Repas ParametresRepas::GetTabRepas(int i)
{
	return tabRepas[i];
}