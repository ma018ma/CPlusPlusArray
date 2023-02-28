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
    int spaziArrey;
    cout << "quanto numeri vuoi darmi?" << endl;
    cin >> spaziArrey;
    int numeri;
    int listaInteri[spaziArrey] = {numeri};
    int lunghezza = sizeof(listaInteri) / sizeof(listaInteri[0]);
    cout << "dammi " << spaziArrey << " numeri" << endl;
    bool crescente;
    for (int i = 0; i < lunghezza; i++)
    { cin >> numeri; // per farmi dare i numeri
        for (int i = 0; i < lunghezza; i++) // per scorrere arrey con i
        {
            for (int g = 0; g < lunghezza -1; g++)
            {
            if (listaInteri [i] > listaInteri [i+1] )
            {
               crescente = true;
            }
            else 
            {
                crescente = false;
            }
            }
        }
    }
    cout << crescente << " e' true"<< endl;
    cout << crescente << " e' false"<< endl;
}