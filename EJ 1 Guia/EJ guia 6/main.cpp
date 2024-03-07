/*Ej. MI-6
Dadas dos fechas informar cual es la más reciente. Determine cuales serían los
datos de entrada y las leyendas a informar de acuerdo al proceso solicitado. */
#include <iostream>

using namespace std;

int main()
{
    int fecha1,fecha2;
    int fechaHoy = 20231102;

    cout << "Ingrese 2 fechas en formato AAAAMMDD" << endl;
    cin >> fecha1 >> fecha2;

    if((fechaHoy-fecha1)>(fechaHoy-fecha2))
        {
         cout << "La fecha mas reciente es: "<<fecha1<< endl;
        }
         else
            {
             cout << "La fecha mas reciente es: "<<fecha2<< endl;
            }


    return 0;
}
