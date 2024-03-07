/* armar una función recursiva que recibe un entero
por parámetro y devuelve la cantidad de dígitos del entero*/

#include <iostream>

using namespace std;

int cantDigitos( int num)
{
    if(num<10)
    {
        return 1;
    }
    else
    {
       return 1 + cantDigitos(num/10);
    }
}

int main()
{

    cout << cantDigitos(-545) << endl;
    return 0;
}
