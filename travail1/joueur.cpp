#include "joueur.h"

Joueur::Joueur()
{
	nom = "";
	victoire = 0;
	defaite = 0;

	for (int i = 0; i < maxCartesAJouer; i++)
	{
		mainJoueur[i] = NULL;
	}
	
}
Joueur::Joueur(string aNom, int aVictoire, int aDefaite)
{
	nom = aNom;
	victoire = aVictoire;
	defaite = aDefaite;

	for (int i = 0; i < maxCartesAJouer; i++)
	{
		mainJoueur[i] = NULL;
	}
}

string Joueur::getNom()
{
	return nom;
}

int Joueur::getVictoire()
{
	return victoire;
}

int Joueur::getDefaite()
{
	return defaite;
}

void Joueur::inscrireJoueur(string aNom, int aVictoire, int aDefaite)
{
	nom = aNom;
	victoire = aVictoire;
	defaite = aDefaite;
}

void Joueur::creerJeuxCarte(Carte* aPointeurJeux, int aPosition)
{
	mainJoueur[aPosition] = aPointeurJeux;
}

