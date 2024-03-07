/*Ej. MI-14:
Dados 50 números enteros, informar el promedio de los mayores que 100 y la
suma de los menores que –10.*/
#include <iostream>

using namespace std;

int main()
{
   int suma,promedio,sum,x,cont;

   sum = 0;
   cont = 0;
   suma = 0;

   for(int i=0; i<10; i++)
   {
       cout << "Ingrese un valor"<<endl;
       cin >>x;

       if(x>100)
       {
         sum =+x;
         cont++;
       }
       else if(x<-10)
       {
           suma=+x;
       }
   }

   promedio = sum/cont;

   cout << "El promedio de los mayores de 100 es: "<<promedio<<endl;
   cout << "La suma de los menores de -10 es:     "<<suma<<endl;


}
