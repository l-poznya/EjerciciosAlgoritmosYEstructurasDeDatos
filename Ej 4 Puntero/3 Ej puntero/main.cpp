/*3. Usando un puntero, escriba un programa que encuentre el máximo de un conjunto de
enteros que ingresa el usuario. El usuario ingresa al principio el tamaño de la muestra*/

#include <iostream>

using namespace std;

int *encontrarMax(int v[], int tam)
{
   int maximo, flag;
   flag = 0;
   for(int i =0; i<=tam; i++)
   {
     if(flag ==0 || v[i]>maximo)
     {
        maximo = v[i];
        flag = 1;
     }

   }
   return maximo;
}


int main()
{
    int n;
    int *P;

    cout<<"Ingrese n"<<endl;
    cin>>n;

    int *v = new int [n];

    for(int i=0; i<n; i++)
    {
        cout<<"Ingrese el valor "<<i+1<<endl;
        cin>>v[i];
    }
    P = encontrarMax(v,5);

    cout<<"El mayor valor agregado es:"<<*P<<endl;



}
