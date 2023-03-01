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
    int lista[5] = {2, 3, 4, 5, 6};                   // creo arrey
    int lunghezza = sizeof(lista) / sizeof(lista[0]); // lunghezza arrey
    for (int i = 0; i < lunghezza; i++)               // scorro arrey1 per pari
    {
        if (lista[i] % 2 == 0)
        {
            quanti++; // lunghezza arrey2
        }
        else
        {
            break;
        }
    }
    int lista2[quanti] = {j};                     // creo arrey
    int lun = sizeof(lista2) / sizeof(lista2[0]); // lunghezza arrey2
    for (int i = 0; i < lunghezza; i++)           // scorro arrey1 perr trovare pari
    {
        if (lista[i] % 2 == 0)
        {
            lista2[j] = lista[i];
            j++;
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < lun; i++) // per lunghezza arrey2 scorro
    {
        cout << lista2[i] << endl; // stampocol cazzoo
    }
    return 0;
}