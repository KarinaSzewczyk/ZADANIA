#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Wpisz wartosc zmiennej: " << endl;

    cin >> a;

    if(a % 2)
       cout << "nieparzysta" << endl;
    else // lub else if(a % 2 == 0)
       cout << "parzysta" << endl;

    return 0;
}
