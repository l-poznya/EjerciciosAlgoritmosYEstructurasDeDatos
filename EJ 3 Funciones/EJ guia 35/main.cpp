/*Ej. MI-35:
Dada una serie de números enteros, informar:
a) su factorial
b) cuantos múltiplos de 3
c) cuantos múltiplos de 5
d) cuantos múltiplos de 3 y de 5
Utilice las funciones de ejercicios anteriores.*/

#include <iostream>

using namespace std;


void factorial(int v[],int tam)
{

  for(int i=0; i<tam; i++)
  {
      int factorial = 1;

      for(int j = 1; j<=v[i]; j++)
      {
          factorial*=j;
      }

     cout <<v[i]<<" != "<<factorial<<endl<<endl;
  }

}



/*int countMultiples(int x, int num)
{
     int cont=0;

     if(num%x==0)
     {
         cont++;
     }

     return cont;
} */

void countMultiples(int x, int vec[],int tam)
{
    int cont = 0;
    for (int i=0; i<tam; i++)
    {

     if(vec[i]%3==0)
     {
        cont++;
     }
     }
     cout<<"Los multiplos de "<< x <<" son "<<cont<<endl<<endl;
}

void cargarVector(int vec[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        cout<<"Ingrese el valor de la posicion: "<< i <<endl<<endl;
        cin >> vec[i];
    }
}



int main()
{
    int v[5];
    int n;

    cargarVector(v,5);
    factorial(v,5);
    countMultiples(3,v,5);
    countMultiples(5,v,5);
    countMultiples(15,v,5);
}
