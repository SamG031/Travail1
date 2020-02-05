#include <string>
#include "carte.h"
using namespace std;

#ifndef JoueurH
#define JoueurH

const int maxCartesAJouer = 26;
class Joueur
{
private:
	string nom;
	int victoire;
	int defaite;
	Carte* mainJoueur[26];
public:
	Joueur();
	Joueur(string aNom, int aVictoire, int aDefaite);
	string getNom();
	int getVictoire();
	int getDefaite();
	Carte* getCard();
	void inscrireJoueur(string, int, int);
	void creerJeuxCarte(Carte*, int);
};
#endif