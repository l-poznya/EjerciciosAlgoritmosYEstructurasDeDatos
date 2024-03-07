/*Ej. MI-20: Dados 10 valores informar el mayor*/

#include <iostream>

using namespace std;

int main()
{
    int x, mayor;

    mayor = x;

    for(int i=10; i>0; i--)
    {
      cout << "Ingrese "<<i<<" numeros"<<endl;
      cin >> x;

      if(x > mayor)
      {
          mayor = x;
      }

    }

     cout<<"El mayor valor ingresado es : "<<mayor<<endl;
}
