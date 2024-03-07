/*Ej. MI-36:
Dada la fracción P/Q, para P y Q naturales informar la mayor cantidad de
simplificaciones. Desarrolle y utilice una función que reciba dos números naturales y retorne el
menor factor común. Ej: 360/60 = 180/30 = 90/15 = 30/5 = 6/1*/


#include <iostream>

using namespace std;

int menorFactor(int P, int Q)
{
    int contador = 0;
    int num;
    while(Q!=0)
    {
       do
       {

       }while(P%num==0 && Q%num==0)

    }


    return contador;
}


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
