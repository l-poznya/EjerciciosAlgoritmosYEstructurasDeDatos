/*
Ej. MI-2: Dada una terna de números naturales que representan al día, al mes y al año
de una determinada fecha informarla como un solo número natural de 8 dígitos con la forma
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
