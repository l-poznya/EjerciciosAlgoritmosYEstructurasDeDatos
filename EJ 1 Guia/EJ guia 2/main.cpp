/*
Ej. MI-2: Dada una terna de n�meros naturales que representan al d�a, al mes y al a�o
de una determinada fecha informarla como un solo n�mero natural de 8 d�gitos con la forma
(AAAAMMDD)*/
#include <iostream>

using namespace std;

int main()
{
    int day, month,year;

    cout<< "Ingrese el dia, mes y anio" << endl;
    cin>>day>>month>>year;

    cout<<"La fecha en 8 digitos:   "<<year<<month<<day<<endl;
    return 0;
}
