#include <iostream>
#include <conio.h>
/*3. Usando un puntero, escriba un programa que encuentre el
máximo de un conjunto de enteros que ingresa el usuario.
 El usuario ingresa al principio el tamaño de la muestra.*/
using namespace std;



int *encontrarMay(int v[], int tam);

int main()
{
   int*p = NULL;
   int n;
   cout<<"Ingrese tam de la muestra"<<endl;
   cin >>n;

   int *v =new int[n];

   for(int i=0; i<n; i++)
   {
       cout<<"v[ "<<i<<"]"<<endl;
       cin>>v[i];
   }
   p = encontrarMay(v,n);

   delete(v)
   cout<<"El mayor es: "<<*p<<endl<<endl;


   cout<<"Contenido que tiene p = "<<p<<endl;
   cout<<"Contenido de donde apunta p = "<<*p<<endl;
   cout<<"Direccion de memoria de p =  "<<&p<<endl<<endl;




}



int *encontrarMay(int v[], int tam)
{
    int *mayor= v;
    for(int i=0; i<tam; i++)
    {
        if(*mayor<*(mayor+i))
        {
            *mayor = *(mayor+i);
        }
    }
    return mayor;
}
