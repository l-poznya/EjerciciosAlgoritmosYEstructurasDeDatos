/*Ej. MI-25:
Dada una serie de M pares {color, n�mero} que corresponden a los tiros de una
ruleta. Se pide informar:
a) cu�ntas veces sali� el n�mero cero y el n�mero anterior a cada cero
b) cu�ntas veces seguidas lleg� a repetirse el color negro
c) cu�ntas veces seguidas lleg� a repetirse el mismo n�mero y cu�l fue
d) el mayor n�mero de veces seguidas que salieron alternados el rojo y el negro
e) el mayor n�mero de veces seguidas que se neg� la segunda docenas*/

#include <iostream>

using namespace std;

int main()
{
    int M,i,num,numAnterior;
    char color;
    int contCero = 0;
    int contN = 0;

    cout <<"Ingrese M"<<endl;
    cin >>M;

    for(i=1; i<=M; i++)
    {
        cout <<"TIRO NRO: "<<i<<endl;

        cout <<"Ingrese el numero:"<<endl;
        cin >> num;

        cout <<"ingrese color: "<<endl;
        cin >> color;

        //a) cu�ntas veces sali� el n�mero cero y el n�mero anterior a cada cero

        if(!num) // num == 0
        {
            contCero++;
            numAnterior = i;
       }
    }

    for(i=1; i<=M; i++)
    {
        cout<<"En la posicion"<<i<<endl;
        cout<<"color: "<<color<<endl;
    }
}

