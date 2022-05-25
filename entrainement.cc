#include<iostream>
#include<cstdlib>

using namespace std;

void saisir(int t[], int &n)
{
  for(int i=0 ; i<n ; i++)
  {
    cout<<"Entrez un nombre"<<endl;
    cin>>t[i];
  }
}

void tri(int t[], int n)
{
  for(int i=1 ; i<n ; i++)
  {
    int elemAInser=t[i];
    for(int j=0 ; j<i ; j++)
	  {
	    int elemCourant=t[j];
	    if(elemCourant>elemAInser)
	    {
	      t[j]=elemAInser;
	      elemAInser=elemCourant;
	    }
	  }
    t[i]=elemAInser;
  }
}

void afficher(int t[], int n)
{
  for(int i=0 ; i<n ; i++)
    cout<<t[i]<<endl;
}

int main()
{
  int t[10];
  int n=10;

  saisir(t,n);
  tri(t,n);
  afficher(t,n);

  return EXIT_SUCCESS;
}
