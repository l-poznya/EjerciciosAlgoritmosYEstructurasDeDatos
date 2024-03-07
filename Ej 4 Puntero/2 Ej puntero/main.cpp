/*Modifique la solución anterior para mostrar los números en orden inverso*/

#include <iostream>

using namespace std;

int main()
{
    int v[5];

    int *p = v;

    cout <<"Ingrese 5 elementos"<<endl;
    cin >>*p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4);

    cout <<"Los valores ingresados son: "<<endl;

    for(int i=4; i>=0; i--)
    {
        cout<<v[i]<<endl;
    }
}
