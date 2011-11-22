#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Podaj liczbe calkowita\n";
    cin >> x;

    if (x > 0)
        cout << "Liczba dodatnia\n";
        else if (x < 0)
        cout << "Liczba ujemna";
    //cout << "Hello world!" << endl;
    return 0;
}
