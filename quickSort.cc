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

void echanger(int t[], int a, int b)
{
  int c;
  c=t[a];
  t[a]=t[b];
  t[b]=c;
}

void quikSort(int t[], int debut, int fin)
{
  int gauche=debut-1;
  int droite=fin+1;
  const int pivot=t[debut];

  if(debut >= fin)
    return;

  while(1)
  {
    do 
      droite--;
    while(t[droite]>pivot);
      
    do 
      gauche++;
    while(t[gauche]<pivot);

    if(gauche < droite)
	    echanger(t,gauche,droite);
    else
	    break;
  }
  quikSort(t, debut, droite);
  quikSort(t, droite+1, fin);
}

void afficher(int t[], int n)
{
  for(int i=0 ; i<n ; i++)
    cout<<t[i]<<endl;
}

int main()
{
  int n=7;
  int* t = new int[n];
  
  saisir(t,n);
  quikSort(t,0,6);
  afficher(t,n);

  return EXIT_SUCCESS;
}
