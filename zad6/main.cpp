#include <iostream>

using namespace std;

int main()
{
    int x, y, m;
    cout << "wpisz liczbe:" << endl;
    cin >> x ;
    m = x;
    y = 0;

    while(x != 0)
    {
        x = x / 10;
        y++;
    }

    if(y == 2 && m > 0)
    {
        cout << "Liczba " << m << " jest dwucyfrowa dodatnia";
    }
    else
    {
        cout << "Liczba " << m << " jest inna";
    }





    return 0;
}
