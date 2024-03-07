#include <iostream>

typedef int miTipo;
using namespace std;
/* Procedimientos punto 1 */
void leerArray(miTipo v[], int tam);
void mostrarArray(miTipo v[], int tam);
void mostrarArrayInverso(miTipo v[], int tam);

int main()
{
   miTipo vec[10];
   leerArray(vec,10);
   mostrarArray(vec,10);
   mostrarArrayInverso(vec,10);
}




/*1. Leer una lista de 10 valores enteros listarlos por
 pantalla en sentido inverso al que ingresaron.
*/
//Procedimiento para leer por pantalla
void leerArray(miTipo v[], int tam)
{
    for(int i=0; i<tam; i++)
    {
    {
      cout<<"Ingrese el elemento nro: "<<i+1<<endl;
      cin>>v[i];
    }
      cout<<"====================="<<endl<<endl;
}

//Procedimiento para mostrar por pantalla
void mostrarArray(miTipo v[], int tam)
{
    for(int i=0; i<tam; i++)
    {
      cout<<v[i]<<endl;
    }
    cout<<"====================="<<endl<<endl;
}

//Procedimiento para mostrar en orden contrario
void mostrarArrayInverso(miTipo v[], int tam)
{
    for(int i=tam-1; i>=0; i--)
    {
      cout<<v[i]<<endl;
    }
    cout<<"====================="<<endl<<endl;
}
/*2. Dado un vector 15 valores, hacer un programa
que pueda obtener, y sacar por pantalla:
− el mayor de los valores
− el menor de los valores
− el más próximo al promedio*/
//Encontrar el numero mayor
void encontrarMayor(miTipo v[])
