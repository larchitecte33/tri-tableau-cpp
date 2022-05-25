#include<iostream>
#include<cstdlib>

using namespace std;

void saisir(int tab[], int &taille)
{
  for(int i=0 ; i<taille ; i++)
  {
    cout<<"Entrez la "<<i<<" \x8Ame valeur"<<endl;
    cin>>tab[i];
  }
}

void tri_insertion(int tab[], int taille)
{
  int i, j;
  for(i = 1; i < taille; i++)
  {
    int element_a_inserer = tab[i];
    for(j = 0; j < i; j++)
	  {
	    int element_courant = tab[j];
	    if (element_a_inserer < element_courant)
	    {
	      tab[j] = element_a_inserer;
	      element_a_inserer = element_courant;
	    }  
	  }
    tab[i] = element_a_inserer;
  }
}

void afficher(int tab[], int taille)
{
  for(int i=0 ; i<taille ; i++)
    cout<<tab[i]<<endl;
}

int main()
{
  int tab[10];
  int taille=10;

  saisir(tab,taille);
  tri_insertion(tab,taille);
  afficher(tab,taille);

  return EXIT_SUCCESS;
}
