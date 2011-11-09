#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x,y,z;
    cout << "Wpisz trzy liczby calkowite: " << endl;

    cin >> x;
    cin >> y;
    cin >> z;

    cout << sqrt(3 + pow(x + 2 * y, 2)) + z << endl;

    return 0;
}
