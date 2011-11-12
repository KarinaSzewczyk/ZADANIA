#include <iostream>

using namespace std;

int main()
{
    char a;
    cout << "Wpisz dowolny znak: " << endl;

    cin >> a;

    if(a >= 'A' && a <= 'Z')
       cout << "Wprowadzony znak jest wielka litera" << endl; // czy jakies inne zdanie
    else if (a >= 'a' && a <= 'z')
       cout << "Wprowadzony znak jest mala litera" << endl;
    else if(a >= '0' && a <= '9')
       cout << "Wprowadzony znak jest cyfra" << endl; // mo¿na dodaæ jeszcze else by powiedzieæ, ¿e wpisany znak jest inny
    return 0;
}

