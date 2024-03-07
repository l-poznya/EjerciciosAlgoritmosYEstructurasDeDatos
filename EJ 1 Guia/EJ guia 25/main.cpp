/*Ej. MI-25:
Dada una serie de M pares {color, número} que corresponden a los tiros de una
ruleta. Se pide informar:
a) cuántas veces salió el número cero y el número anterior a cada cero
b) cuántas veces seguidas llegó a repetirse el color negro
c) cuántas veces seguidas llegó a repetirse el mismo número y cuál fue
d) el mayor número de veces seguidas que salieron alternados el rojo y el negro
e) el mayor número de veces seguidas que se negó la segunda docenas*/

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

        //a) cuántas veces salió el número cero y el número anterior a cada cero

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

