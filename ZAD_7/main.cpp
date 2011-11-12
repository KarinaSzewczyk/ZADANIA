#include <iostream>

using namespace std;

int main()
{
    char a;
    cout << "Wpisz dowolny znak: " << endl;

    cin >> a;

    if(a >= 'A' && a <= 'Z')
       cout << "Wprowadzony znak jest wielka litera" << endl;
    else
       cout << "Wprowadzony znak nie jest wielka litera" << endl;

    return 0;
}
