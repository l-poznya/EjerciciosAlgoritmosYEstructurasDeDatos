/*3. Se leen las letras de una palabra car�cter a car�cter.
El �ltimo car�cter que ingresa es la barra de dividir(/),
 que indica que la palabra ha finalizado.
Escribir un programa que imprima la palabra en el orden
que se ingres� y en sentido inverso
(por ejemplo: pera arep, la palabra podr� tener hasta 20
caracteres).*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char c;
    char v[100];
    int cont = 0;
    int i;

    c = getche();

    while(c!= '/')
    {
        v[cont]=c;
        cont++;
        c=getche();
    }

    cout<<endl<<endl;

    for(i=cont-1; i>=0; i--)
    {
        cout<<v[i];
    }

}

