/*Scrivi una funzione che prenda in input un array di interi e 
la sua lunghezza e restituisca l'indice dell'elemento che 
ha il valore massimo all'interno dell'array. Se ci sono più 
elementi con lo stesso valore massimo, la funzione 
dovrebbe restituire l'indice del primo di questi elementi.*/

#include<iostream>
using namespace std;

int main()
{
cout<< "Quanti ne metti?" << endl;
int quanti;
cin >> quanti;
int numeri;
int massimo = 0;
int arreyMax[quanti] = {numeri};
int lunghezza = sizeof(arreyMax) / sizeof(arreyMax[0]);
for (int i=1 ; i < lunghezza; i++)
    { cin >> numeri; }
    if(arreyMax[i]>massimo)
    {
    massimo = numeri;}
std::cout<< massimo;
}
