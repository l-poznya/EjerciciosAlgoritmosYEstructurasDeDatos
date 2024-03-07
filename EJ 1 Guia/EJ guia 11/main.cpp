/*Ej. MI-11 Se ingresa una edad, mostrar por pantalla alguna de las siguientes leyendas:
 ‘menor’ si la edad es menor o igual a 12
 ‘cadete’ si la edad está comprendida entre 13 y 18
 ‘juvenil’ si la edad es mayor que 18 y no supera los 26
 ‘mayor’ en el caso que no cumpla ninguna de las condiciones anteriores
*/
#include <iostream>

using namespace std;

int main()
{
    int y;

    cout<<"Ingrese edad"<<endl;
    cin>>y;

    if(y<=12)
    {
        cout<<"menor"<<endl;
    }
    else if(y>12 && y<18)
    {
        cout<<"cadete"<<endl;
    }
    else if(y>18 && y<26)
    {
        cout<<"juvenil"<<endl;
    }
    else
    {
        cout<<"mayor"<<endl;
    }
}
