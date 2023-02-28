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
    int maggiore = 0;
    cout << "dammi " << spaziArrey << " numeri" << endl;
    for (int i = 0; i < lunghezza; i++)
    {
        cin >> numeri;

        for (int i = 0; i < lunghezza; i++)
        {
            if (numeri > maggiore)
                maggiore = numeri;
        }
    }
    cout << "il maggiore e': " << maggiore;
}