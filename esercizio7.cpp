/*Scrivi una funzione che prenda in input un array di interi e 
la sua lunghezza e restituisca il numero di sequenze di 
interi crescenti all'interno dell'array. Ad esempio, se 
l'array di input è {1, 2, 3, 5, 4, 7}, la funzione dovrebbe 
restituire 2 perché ci sono due sequenze crescenti: {1, 2, 
3} e {4, 7}.*/

#include <iostream>
#include <string>
#include <array>
using namespace std;
int main()
{
    int lista1[5] = {2,3,6,7,8};  
    int lun = sizeof(lista1) / sizeof(lista1[0]);
    bool crescente = true;
   
    for (int i = 0; i < lunghezza; i++)
    { cin >> numeri; // per farmi dare i numeri

        for (int i = 0; i < lunghezza -1; i++) //ciclo for
        {
            if (listaInteri [i] > listaInteri [i+1] )
            {
                return false;
                break;
            }
            
        }
        return true;
    return 0;
}
}