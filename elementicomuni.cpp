/*Scrivi una funzione che prenda in input due array di interi
e le loro lunghezze e restituisca il numero di elementi
comuni ai due array. Ad esempio, se gli array di input
sono {1, 2, 3, 4} e {2, 4, 6, 8}, la funzione dovrebbe
restituire 2 perché ci sono due elementi comuni: 2 e 4.*/
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
    int arrey1[] = {1,2,3};
    int lun = sizeof(arrey1) / sizeof(arrey1[0]);
    int arrey2[] = {1,3};
    int len = sizeof(arrey2) / sizeof(arrey2[0]);
    int valore = 0;
    for (int i = 0; i < lun; i++) // per scorrere arrey con i
    {
        for (int g = 0; g < len; g++)
        {
            if (arrey1[i] == arrey2[g])
            {
                valore++;
                
            }
        }
    }
    cout << "i valori comuni sono:" << valore << endl;
}