/* Escriba un programa que, utilizando aritmética de punteros, tome 5 elementos enteros en
un array y luego los muestre en pantalla:
*/
#include <iostream>

using namespace std;

int main()
{
    int v[5];

    int *p = v;

    cout <<"Ingrese 5 elementos"<<endl;
    cin >>*p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4);

    cout <<"Los valores ingresados son: "<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<v[i]<<endl;
    }


}
