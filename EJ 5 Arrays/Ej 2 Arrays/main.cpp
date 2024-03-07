#include <iostream>
#define TAM 5
/*2. Dado un vector 15 valores, hacer un programa que
pueda obtener, y sacar por pantalla:
− el mayor de los valores
− el menor de los valores
− el más próximo al promedio*/
using namespace std;

void cargar(int v[], int tam);
int mayor (int v[],int tam);
int menor (int v[],int tam);
int promedio(int v[],int tam);


int main()
{
    int opcion;
    int v[5];
    do
    {
        cout<<"========MENU========"<<endl;
        cout<<"1-Cargar array"<<endl;
        cout<<"2-Encontrar el mayor"<<endl;
        cout<<"3-Encontrar el menor"<<endl;
        cout<<"4-Salir"<<endl<<endl;
        cout<<""<<endl;

        cin>>opcion;

        switch(opcion)
        {

        case 1:
          cargar(v,TAM);
          break;
        case 2:
          mayor(v,TAM);
          break;
        case 3:
          menor(v,TAM);
          break;
        }
    }while(opcion!=4);

}


void cargar(int v[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        cout<<"Cargar V=["<<i<<"]"<<endl;
        cin>>v[i];
    }
}

int mayor(int v[],int tam)
{
    int mayor = v[0];

    for(int i=0; i<tam; i++)
    {
        if(v[i] > mayor)
        {
            mayor = v[i];
        }
    }
    cout<<"Mayor = "<<mayor<<endl;
}


int menor(int v[],int tam)
{
    int menor = v[0];

    for(int i=0; i<tam; i++)
    {
        if(v[i] < menor)
        {
            menor = v[i];
        }
    }
    cout<<"Menor = "<<menor<<endl;
}

int promedio(int v[],int tam)
{
    int cont = 0;
    int acumulador = 0;
    int promAprox = 0;



    for (int i=0; i<tam; i++)
    {
      cont++;
      acumulador+=v[i];
    }

    promAprox = acumulador/cont;

    cout<<"Promedio Aproximado+"<<promAprox<<endl;
}


















