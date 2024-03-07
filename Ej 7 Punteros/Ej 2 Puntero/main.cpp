#include <iostream>
#include <conio.h>
using namespace std;
/*2. Modifique la solución anterior para mostrar los
 números en orden inverso*/

int main()
{
    int v[5],i;
    int *p = v;

    cout <<"Ingrese 5 numeros: "<<endl;
    cin >> *p >> *(p+1) >> *(p+2) >> *(p+3) >> *(p+4);
    cout <<"Ingresaste: "<<endl;
    for(i=4; i>=0; i--)
    {
        cout <<v[i]<<endl;
    }
    getch();
    return 0;
}
