/*Ej. MI-5
Dados dos valores enteros y distintos, emitir una leyenda apropiada que informe
cuál es el mayor entre ellos.*/
#include <iostream>

using namespace std;

int main()
{
    int A,B;

    cout << "Ingrese 2 valores distintos" << endl;
    cin>>A>>B;

    if(A>B)
     {
       cout << "El mayor valor es "<<A<< endl;
     }
      else
      {
        cout << "El mayor valor es "<<B<< endl;
      }
    return 0;
}
