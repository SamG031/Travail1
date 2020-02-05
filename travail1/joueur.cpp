#include "joueur.h"
#include <time.h>

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

Carte* Joueur::getCard(int aIndex)
{
	return mainJoueur[aIndex];
}

void Joueur::inscrireJoueur(string aNom, int aVictoire, int aDefaite)
{
	nom = aNom;
	victoire = aVictoire;
	defaite = aDefaite;
}

int Joueur::addVictoire()
{
	victoire = victoire + 1;

	return victoire;
}

int Joueur::addDefaite()
{
	defaite = defaite + 1;

	return victoire;
}

void Joueur::creerJeuxCarte(Carte* aPointeurJeux, int aPosition)
{
	mainJoueur[aPosition] = aPointeurJeux;
}

void Joueur::addCard(int pos)
{
	int TabPos;
	srand(time(NULL));

	TabPos = 0 + (rand() % 51);

	// mainJoueur[pos] = (À terminé lorsuqe données.h et données.cpp créer)

}

void Joueur::clearMain()
{
	for (int i = 0; i < maxCartesAJouer; i++)
	{
		mainJoueur[i] = NULL;
	}
}
