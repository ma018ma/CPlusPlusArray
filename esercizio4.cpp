#include <iostream>
#include <string>
#include <array>
using namespace std;

int main()
{
    int listaInteri[4] = {2,5,7,9};
    int lunghezza = sizeof(listaInteri) / sizeof(listaInteri[0]);
    int maggiore = 0;

        for (int i = 0; i < lunghezza; i++)
        {
            if (listaInteri[i] > maggiore)
                {
                    maggiore = listaInteri[i];
                }
        }
    
    std::cout << "il maggiore e': " << maggiore;
}