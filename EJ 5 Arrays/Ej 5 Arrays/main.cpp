/*5. Hacer un programa que permita realizar la suma y
el producto de dos vectores.
El usuario deberá poder elegir el tamaño del vector
(entre 2 y 10 valores)*/

#include <iostream>

using namespace std;

int producto(int v1[], int v2[],int tam);
void suma(int v1[], int v2[],int resul[],int tam);

int main()
{
    int v1[10] = {15,16,17,18,19,20,21,22,23,24};
    int v2[10] = {25,26,27,28,29,30,31,32,33,34};
    int vR[10];
    int tam;

    cout<<"Ingrese tam"<<endl<<endl;
    cin>>tam;

    suma(v1,v2,vR,tam);

    cout<<"La suma es: "<<endl<<endl;
    for(int i=0; i<tam; i++)
    {
      cout<<"Resultado[ "<<i<<" ]="<<vR[i]<<endl;
    }
     cout<<endl<<endl<<"Producto escalar: "<<producto(v1,v2,tam)<<endl;

}


int producto(int v1[], int v2[],int tam)
{
    int producto = 0;
    for(int i=0; i<tam; i++)
    {
        producto +=v1[i] * v2[i];
    }
    return producto;
}

void suma(int v1[], int v2[],int resul[],int tam)
{
    for(int i=0; i<tam; i++)
    {
        resul[i] = v1[i] + v2[i];
    }
    return;
}
