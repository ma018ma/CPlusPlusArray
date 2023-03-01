#include <iostream>
#include <string>
#include <array>
using namespace std;
int main()
{
    int listaInteri[spaziArrey] = {numeri};  
    int lunghezza = sizeof(listaInteri) / sizeof(listaInteri[0]);
    std::cout << "dammi " << spaziArrey << " numeri" << endl;
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