/*Ej. MI-4:
A partir de un valor entero ingresado por teclado, se pide informar:
a) La quinta parte de dicho valor
b) El resto de la división por 5
c) La séptima parte del resultado del punto a)*/
#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Ingrese un entero" << endl;
    cin >> x;

    cout<<"  a) La quinta parte:               "<<x/5<<endl;
    cout<<"  b) El resto de la division por 5: "<<x%5<<endl;
    cout<<"  c) La septima parte del punto a): "<<(x/5)/7<<endl;
    return 0;
}
