#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x;
    cout << "Wpisz wartosc liczby zmiennoprzecinkowej: " << endl;

    cin >> x;

    if(x < 0)
      cout << "Wynik = 0" << endl; // lub inny tekst
    else
      cout << "Wynik = " << (sqrt(x) + x) / (2 + x) << endl;

    return 0;
}
