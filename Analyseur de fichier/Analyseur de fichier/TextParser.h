#include <iostream>
#include <fstream>

using namespace std;

struct Horaire
{
	int heure;
	int minute;
};

struct Repas
{
	int nbRation;
	Horaire horaire;
};

class TextParser
{

public:

	TextParser();

	~TextParser();

	//Traite un fichier texte pour en extraire les données qu'il contient : nb de repas, Horaires, nb de rations
	//parametre d'entrée : ifstream(fichier a traiter)
	//parametre de sortie : true si succes, false si echec
	bool TraitementFichier(ifstream flux);

	//Retourne la valeur NbRepas
	int GetNbRepas();
	
	Repas GetTabRepas(int i);
	

private:

	int nbrepas;
	Repas tabRepas[5]; // creation d'un tableau de repas
	
};


