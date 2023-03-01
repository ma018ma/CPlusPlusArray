#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
   // std::cout << "inserisci il numero di interi";
  //  int numeroInteri;
    int listaInteri[4] = {2,4,7,9};
    int lunghezza = sizeof(listaInteri)/sizeof(listaInteri[0]);
    int sommaPari = 0;
    int sommaDispari = 0;
    //int numero;
    //cin >> numeroInteri;
    //cin>> numero;
    for (int i = 0; i<lunghezza; i++)
    {
        if (listaInteri[i]%2 == 0)
        {
            sommaPari += listaInteri[i];
        }
        else
        {
           // listaInteri[i] += sommaDispari;
        }
    }
    for (int i = 0; i<lunghezza; i++)
    {
        if (listaInteri[i]%2 == 1)
        {
            sommaDispari += listaInteri[i]; 
        }
        else
        {
           //sommaPari += listaInteri[i]; 
        }
    }
    cout << sommaPari << endl;
    cout << sommaDispari << endl;
}       