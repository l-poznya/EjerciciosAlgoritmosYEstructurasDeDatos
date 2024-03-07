/*Ej. MI-22:
Dado un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD), que
finaliza con un Nombre = ‘FIN’, informar el nombre de la persona con mayor edad y el de la
más joven.*/
#include <iostream>

using namespace std;

int main()
{
    string nombre = "", nombreMenor = "", nombreMayor = "";
    int fecha,cont,fechaMayor,fechaMenor;

    cont = 1;

    while( nombre != "FIN" && nombre != "fin")
    {
        cout << "Ingrese el nombre de la parsona" <<endl;
        cin >> nombre;

        cout <<" Ingrese su fecha (AAAAMMDD)"<<endl;
        cin >> fecha;

        if(fecha > fechaMayor || cont==1)
        {
            fechaMayor = fecha;
            nombreMayor = nombre;
        }
        else if(fecha < fechaMenor || cont ==1)
        {
            fechaMenor = fecha;
            nombreMenor = nombre;
        }

        cont ++;
    }

    cout << "El nombre de la persona mayor es: "<<nombreMayor<<endl;
    cout << "Nacio el: "<<fechaMayor<<endl;

    cout << "El nombre de la persona menor es: "<<nombreMenor<<endl;
    cout << "Nacio el: "<<fechaMenor<<endl;


}
