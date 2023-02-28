#include <iostream>
#include <string>
#include <array>
using namespace std;

bool crescente ( int listaInteri[], int n)
{   int spaziArrey;
    for(int i = 0; i< n ; i++)
    {
    if (listaInteri[] > listaInteri[i + 1]) 
    {
        return false;
    }
    }
    return true;
}

int main()
{
    cout << "quanto numeri vuoi darmi?" << endl;
    cin >> spaziArrey;
    int numeri;

    int lunghezza = sizeof(listaInteri) / sizeof(listaInteri[0]);
    cout << "dammi " << spaziArrey << " numeri" << endl;
    bool crescente ( int listaInteri[spaziArrey] = {numeri})
    
    
    for (int i = 0; i < lunghezza; i++)
    { cin >> numeri; // per farmi dare i numeri
        for (int i = 0; i < lunghezza -1; i++)
        {
            for (int g = 0; g < lunghezza -1; g++)
            {
            if (listaInteri [g] > listaInteri [g+1] )
            //crescente = true; 
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