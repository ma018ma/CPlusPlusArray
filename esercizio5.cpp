#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
    int listaInteri[4] = {6,7,5,8};
    int lunghezza = sizeof(listaInteri) / sizeof(listaInteri[0]);
    bool crescente = true;
        for (int i = 0; i < lunghezza; i++) // per scorrere arrey con i
        {
            for (int g = i+1; g < lunghezza -1; g++)
            {
                if (listaInteri [i] > listaInteri [i+1] )
            {
               crescente = false;
               break;
            }

            }
        }
        if(crescente == true)
        {
            cout << "l'arrey e' crescente" << endl;
        }
        else
        {
            cout << "L'arrey non e' crescente" << endl;
        }
}