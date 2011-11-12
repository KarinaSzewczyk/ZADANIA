#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cout << "Wpisz dwie zmienne: " << endl;

    cin >> m;
    cin >> n;

    cout << "Czesc calkowita: " << m / n << endl;
    cout << "Reszta z dzielenia: " << m % n << endl;

    return 0;
}
