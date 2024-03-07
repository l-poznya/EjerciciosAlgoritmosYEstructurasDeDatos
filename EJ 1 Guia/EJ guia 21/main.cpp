/*Ej. MI-21:
Dados N valores informar el mayor, el menor y en que posición del conjunto
fueron ingresados.*/

#include <iostream>

using namespace std;

int main()
{
   int n,nro,mayor,menor,posmay,posmen,i;

   cout <<"Ingrese N"<<endl;
   cin >> n;

   for(i=1; i<=n; i++)
   {
     cout <<"Ingrese valores"<<endl;
     cin >> nro;

     if(nro > mayor)
     {
         mayor = nro;
         posmay = i;
     }
     else if(nro < menor)
     {
         menor = nro;
         posmen = i;
     }
   }

    cout << " El mayor es:  "<< mayor<<" en la posicion: "<<posmay<<endl;
    cout << " El menor es: " << menor<<" en la posicion: "<<posmen<<endl;
}
