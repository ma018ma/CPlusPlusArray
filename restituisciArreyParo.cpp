/*Scrivi nel main un algoritmo che su un array, calcola e 
restituisce un nuovo array che contenga solo gli elementi 
dell'array di input che sono pari.*/
#include <iostream>
#include <string>
#include <array>
using namespace std;

int main()
{
    int spaziArrey; //lunghezza dall'utente
    cout<< "quanti numeri vuoi darmi?" << endl;
    cin >> spaziArrey; //lunghezza dall'utente
    int numeri; //numeri dell' arrey
    int listaInteri[spaziArrey] = {numeri}; // creo arrey
    int lunghezza = sizeof(listaInteri)/sizeof(listaInteri[0]); // lunghezza arrey
    int paridaspostare = 0;
    
    cout<< "dammi " << spaziArrey << " numeri" << endl;
    for (int i=0; i<lunghezza; i++) //scorre con i l' arrey
    {
    cin >> numeri;
    }
    for (int i = 0; i<lunghezza; i++)
    {   
        if (listaInteri[i]%2 == 0)
        {
            paridaspostare = numeri;
            for (int w; i <= paridaspostare; i++)
            {
            int pari[i] = {paridaspostare};
            i++;
            }
        }
    }
    cout << paridaspostare << endl;
}