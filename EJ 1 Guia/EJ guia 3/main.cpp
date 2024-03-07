/*Ej. MI-3: Dada un numero entero de la forma (AAAAMMDD), que representa
una fecha valida mostrar el dia, mes y año que representa. */

#include <iostream>

using namespace std;

int main()
{
    int AAAAMMDD,a,m,d;


    cout << "Ingrese una fecha en el formato AAAAMMDD" << endl;
    cin >> AAAAMMDD;

    a = AAAAMMDD / 10000;
    m = (AAAAMMDD % 10000)/100;
    d = AAAAMMDD % 100;

    cout<<"YEAR : "<<a<<" MONTH : "<<m<<" DAY : "<<d<<endl;

    return 0;
}
