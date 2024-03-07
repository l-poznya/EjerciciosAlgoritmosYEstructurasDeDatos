/*Ej. MI-27:
En un torneo de fútbol participan K equipos. El torneo se juega con el sistema de
todos contra todos. Por cada partido disputado por un equipo se dispone de la siguiente
información:
a) Nro. de equipo,
b) Código del resultado ('P'= Perdido, 'E'= Empatado, 'G'= Ganado).
Se arma un lote de datos con todos los resultados del torneo, agrupados por Nro. de equipo.
Desarrollar el programa que imprima:
Por cada equipo, su número y el puntaje total que obtuvo (suma 3 si gana, y 1 si
empata).
*/
#include <iostream>

using namespace std;

int main()
{
    int k,i,nroEquipo;
    char codigoResultado;


    cout <<"Ingrese cuantos equipos juegan"<<endl;
    cin >> k;

    for(i = 1; i<=k; i++)
    {
        cout <<" Equipo numero: "<<i<<endl;
        cout <<endl;

        cout <<"Codigo de resultado(P,E,G)"<<endl;
        cin >> codigoResultado;

        while(codigoResultado !='P' || codigoResultado !='p'
              codigoResultado !='E' || codigoResultado !='e'
              codigoResultado !='G' || codigoResultado !='g' )
          {
            cout <<"Ingrese un codigo valido"<<endl;
            cin >> codigoResultado
          }

        if(codigoResultado !='G' || codigoResultado !='g')
        {
            cout <<"HOLA"<<endl;
        }

    }
}
