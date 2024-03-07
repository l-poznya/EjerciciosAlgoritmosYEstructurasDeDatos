#include <iostream>
#include <conio.h>
using namespace std;

/*
Escriba un programa que, utilizando aritmética de punteros,
tome 5 elementos enteros en un array y luego los muestre en
pantalla:*/

int main()
{
    int v[5],i;
    int *p = v;

    cout <<"Ingrese 5 numeros: "<<endl;
    cin >> *p >> *(p+1) >> *(p+2) >> *(p+3) >> *(p+4);
    cout <<"Ingresaste: "<<endl;
    for(i=0; i<5; i++)
    {
        cout <<v[i]<<endl;
    }
    getch();
    return 0;
}
