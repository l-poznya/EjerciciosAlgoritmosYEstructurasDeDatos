#include <iostream>
/*Escriba un subprograma que ordene un array,
el tamaño del array lo define el usuario y
luego ingresa sus elementos. Debe hacerse todo
a través del uso de punteros*/
using namespace std;

int *ordenar(int *p, int tam);
void cargarArray(int v[],int tam);
void mostrar(int v[], int tam);


int main()
{
    int n;
    cout<<"ingrese cantidad de elementos del array"<<endl;
    cin >>n;
    int *v = new int [n];
    int *p=cargarArray(v,n);


}


int cargarArray(int *p,int tam)
{
   for(int i=0; i<tam; i++)
   {
       cout<<"Ingrese el valor: [ "<<i<<" ]"<<endl;
       cin>>*(p+i);
   }
   return 0;
}

int *ordenar(int *p, int tam)
{
   int i,j;

   for(i=0; i<tam; i++)
   {
       for(j=i+1; j<tam; j++)
       {
         if(*(p+j) < *(p+i))
         {
             int c = *(p+j);
             *(p+j) =*(p+i);
             *(p+i)=c;

         }
       }
   }
   return p;
}

void mostrar(int v[], int tam)
{
    for(int i=0; i<tam; i++)
    {
       cout<<"v[ "<<v[i]<<" ]"<<endl;
    }
}
