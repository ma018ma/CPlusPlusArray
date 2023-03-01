/*Scrivi nel main un algoritmo che su un array, calcola e
restituisce un nuovo array che contenga solo gli elementi
dell'array di input che sono pari.*/
#include <iostream>
#include <array>
using namespace std;

int main()
{
    int quanti;
    int j;
    int listaInteri[5] = {2, 3, 4, 5, 6};                               // creo arrey
    int lunghezza = sizeof(listaInteri) / sizeof(listaInteri[0]); // lunghezza arrey
    for (int i = 0; i < lunghezza; i++)//scorro arrey1 per pari
    {
        if (listaInteri[i] % 2 == 0)
        {
            quanti++; // lunghezza arrey2
        }
        else{continue;}
    }   
        int listaInteri2[quanti] = {};                                // creo arrey
        int lun = sizeof(listaInteri2) / sizeof(listaInteri2[0]);  // lunghezza arrey2
        for (int i = 0; i < lunghezza; i++) // scorro arrey1 perr trovare pari
        {
            if (listaInteri[i] % 2 == 0)
            {
                listaInteri2[j] = listaInteri[i];
                j++;
            }
        }
    
    for (int i = 0; i < lun; i++) // per lunghezza arrey2 scorro
    {
        cout << listaInteri2[i] << endl; //stampocol cazzoo
    }
}