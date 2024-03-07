/*Ej. MI-16:
 Ingresar e informar valores, mientras que el valor ingresado no sea negativo.
Informar la cantidad de valores ingresados. */

#include <iostream>

using namespace std;

int main()
{
    int x;

    do
    {
     cout <<"Ingrese valores positivos"<<endl;
     cin >> x;

    }while(x>0);
}
