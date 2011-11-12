#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int a;
    stringstream h;

    cout << "Wpisz wartosc zmiennej: " << endl;
    cin >> a;

    h << a;

    if(h.str().length() == 2 && a > 0)
      cout << "Wartosc dwucyfr-owa dodatnia" << endl;
    else
      cout << "Inna" << endl;

    return 0;
}
