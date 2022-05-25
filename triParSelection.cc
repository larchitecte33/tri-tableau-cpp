#include<iostream>
#include<cstdlib>

using namespace std;

void saisir(int tableau[], int &longueur)
{
  for(int i=0 ; i<longueur ; i++)
  {
    cout<<"Entrez la "<<i<<" ème valeur"<<endl;
    cin>>tableau[i];
  }
}

void echanger(int tableau[], int a, int b)
{
  int tmp;
  tmp=tableau[a];
  tableau[a]=tableau[b];
  tableau[b]=tmp;
}

void triSelection(int tableau[], int longueur)
{
  int i, maximum;
  while(longueur>0)
  {
    // recherche de la plus grande valeur du tableau
    maximum = 0;
    for(i=1; i<longueur; i++)
	    if(tableau[i]>tableau[maximum])
	      maximum = i;
    // echange du maximum avec le dernier élément
    echanger(tableau, maximum, longueur-1);
    // on traite le reste du tableau
    longueur--;
  }
}

void afficher(int tableau[], int longueur)
{
  for(int i=0 ; i<longueur ; i++)
    cout<<tableau[i]<<endl;
}

int main()
{
  int tableau[10]; 
  int longueur=10;

  saisir(tableau,longueur);
  triSelection(tableau, longueur);
  afficher(tableau, longueur);

  return 0;
}
