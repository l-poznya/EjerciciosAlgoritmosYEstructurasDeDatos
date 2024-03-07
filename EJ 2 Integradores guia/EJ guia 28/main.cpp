/*Ej. MI-28:
Dada una serie de caracteres que conforman una oraci�n, donde cada palabra est�
separada de la siguiente por un car�cter blanco y la oraci�n finaliza con un punto. Se pide
informar:
a) cantidad de veces que apareci� cada vocal
b) cantidad de palabras que contiene la oraci�n
c) cantidad de letras que posee la palabra m�s larga.*/

#include <iostream>

using namespace std;

int main()
{
    char a;
    int cantPalabras =0;
    int cantA = 0;
    int cantE = 0;
    int cantI = 0;
    int cantO = 0;
    int cantU = 0;

    cout<<"ingrese palabras"<<endl;

    a = getchar();


    while(a!= '/' )
    {
        switch(a)
        {
        case 'a':
            cantA++;
            break;

        case 'e':
            cantE++;
            break;

        case 'i':
            cantI++;
            break;

        case 'o':
            cantO++;
            break;

        case 'u':
            cantU++;
            break;

        case ' ':
            cantPalabras++;
            break;

        }
    }


    cout << "Cantidad A: "<<cantA<<endl;
    cout << "Cantidad E: "<<cantE<<endl;
    cout << "Cantidad I: "<<cantI<<endl;
    cout << "Cantidad O: "<<cantO<<endl;
    cout << "Cantidad U: "<<cantU<<endl;
    cout << "Cantidad de palabras: "<<cantPalabras<<endl;


}
