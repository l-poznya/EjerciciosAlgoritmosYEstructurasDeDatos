/*Ej. MI-8:
Dado un tri�ngulo representado por sus lados L1, L2, L3,
determinar e imprimir una leyenda seg�n sea:
equil�tero, is�sceles o esc�lenos.*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout << "Ingrese 3 valores " << endl;
    cin >>a>>b>>c;

    if((a+b>c) || (a+c>b) || (b+c>a))
        {
           cout << "Los valores forman un triangulo : ";

           if(a==b && b==c)
             {
              cout << "Equilatero" << endl;
             }
             else if(a==b || a==c || b==c)
               {
                cout << "Isosceles" << endl;
               }
               else
                {
                 cout << "Escaleno" << endl;
                }

        }
        else
         {
          cout << "NO forman un triangulo" << endl;
         }


    return 0;
}
