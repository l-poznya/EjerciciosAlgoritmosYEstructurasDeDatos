/*
Ej. MI-7: Dado tres valores determinar e imprimir una leyenda según sea: “Forman
triangulo” o “No forman triangulo”.*/

#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout << "Ingrese 3 valores " << endl;
    cin >>a>>b>>c;

    if((a+b>c) || (a+c>b) || (b+c>a))
        {
          cout << "Los valores forman un triangulo" << endl;
        }
         else
            {
             cout << "NO forman un triangulo" << endl;
            }

    return 0;
}
