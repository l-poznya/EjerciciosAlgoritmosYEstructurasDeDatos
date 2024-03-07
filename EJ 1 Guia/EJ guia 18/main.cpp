/*Ej. MI-18:
Dado un valor M determinar y emitir un listado con los M primeros múltiplos de
3 que no lo sean de 5, dentro del conjunto de los números naturales.*/
#include <iostream>

using namespace std;

int main()
{
    int m,contador,num;

    contador = 0;
    num = 1;

    while( contador < m)
    {
        if(num%3==0 && num%5!=0)
        {
          cout<<"numero encontado: "<<num<<endl;
          contador++;
        }
       num++;
    }
}
