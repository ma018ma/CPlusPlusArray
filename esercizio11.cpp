/*Crea due array di due dimensioni diverse, riempili con 
numeri consecutivi.
Crea e poi stampa a schermo i due array concatenati
Array1 [0,1,2,3,4]
Array2 [0,1,2]*/
#include<iostream>
using namespace std;

int main(){
    int spaziArrey;
    int numeri;
    int arreyPrimo [spaziArrey] = {numeri};
    cout << "quanto numeri vuoi darmi per il primo arrey?" << endl;
    cin >> spaziArrey;
    int arreySecondo [3] = {0, 1, 2};
    cout << "dammi per il primo Arrey" << spaziArrey << " numeri" << endl;
    for (int b; b = spaziArrey; b++)
    {cin >> numeri;}
    int listaInteri[spaziArrey] = {numeri};
    int lunghezza = sizeof(listaInteri) / sizeof(listaInteri[0]);
    
    int lunghezza = sizeof(arreyPrimo) / sizeof(arreyPrimo[0]);
    int lunghezzo = sizeof(arreySecondo) / sizeof(arreySecondo[0]);
    for (int i = 0; i < lunghezza; i++)

    {
      cout << i << endl;
    }
    for (int a = 0; a < lunghezzo; a++)
    {
    cout << a << endl;
    }    
}