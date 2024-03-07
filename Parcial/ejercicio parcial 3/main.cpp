/* armar una funci�n recursiva que recibe un entero
por par�metro y devuelve la cantidad de d�gitos�del�entero*/

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
