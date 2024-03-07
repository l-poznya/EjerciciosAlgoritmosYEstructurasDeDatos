/*6. Realice un subprograma que muestre el
contenido de un vector en forma  ordenada
descendentemente.
El tamaño del array es informado por parámetro.*/
#include <iostream>

using namespace std;
void descemdente(int v[], int tam);

int main()
{
    int v[5] = {34,78,53,90,12};
    descemdente(v,5);
}


void descemdente(int v[], int tam)
{
    for(int i=tam; i>=0; i--)
    {
        cout<<v[i]<<endl;
    }
}
