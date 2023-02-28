#include <iostream>
#include <string>
//#include <array>
using namespace std;
int main()
{
    /*string parole;
    cout<< "scrivi una parola" << endl;
    cin>> parole;
    int mioArray [casa];*/

    std::cout << "inserisci la parola" << endl;
    string parola;
    cin >> parola;
    bool univoco;
    string doppie;
    string singola;
    for (int i = 0; i < parola.length(); i++)
    {
        for (int g = i+1; g < parola.length(); g++)
        {
            if (parola[i] == parola[g])
            {
                univoco = false;
                string doppie = parola;
                break;
            }
            else
            {
                univoco = true;
                string singola = parola;
            }
        }
    }
    if (univoco == true)
    {
          cout << singola << "la parola e' univoca" << endl;
    }
    else
    {
        cout << doppie << "la parola ha doppie." << endl;
    }

}
