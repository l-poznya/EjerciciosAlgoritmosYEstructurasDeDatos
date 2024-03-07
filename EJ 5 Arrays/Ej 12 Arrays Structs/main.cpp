/*12.
Se leen datos de notas obtenidas por los alumnos
de una cátedra y se desea informar
− el promedio de las notas obtenidas por los alumnos
− el nombre, tipo y número de documento y número de
legajo (padrón) de los alumnos que hayan aprobado con
nota igual o mayor que siete.
− Los datos del/los alumnos con peor nota.
La secuencia finaliza con el alumno Wolf Roberto que
debe ser procesado
*/
#include <iostream>

using namespace std;

struct ALUMNO
{
    char nombre [50];
    char tipoDoc [15];
    int numDoc[8];
    int legajo;
    int nota;
};

int main()
{

}
void aprobados(ALUMNO alumno[],int cantAlumnos)
{
    for(int i=0; i<cantAlumnos; i++)
    {
        if(alumno[i].nota >=7)
        {
            cout<<"NOMBRE= "<<alumno[i].nombre<<endl;
        }
    }
}
//==============================================
void cargar(ALUMNO alumno[], int cantAlumno)
{
    for(int i=0; i<cantAlumno; i++)
    {
    cout<<"Ingrese el nombre: "<<endl;
    cin>>alumno[i].nombre;

    cout<<"Ingrese tipo de doc: "<<endl;
    cin>>alumno[i].tipoDoc;

    cout<<"Ingrese numero de dni sin espacios ni puntos: "<<endl;
    cin>>alumno[i].numDoc;

    cout<<"Ingrese numero de legajo: "<<endl;
    cin>>alumno[i].legajo;
    }

}


//==============================================
float promedio(ALUMNO alumno[],int cantAlumnos)
{
    int suma = 0;

    for(int i=0; i<cantAlumnos; i++)
    {
        suma =+ alumno[i].nota;
    }

    float promedio = suma / cantAlumnos;

    return promedio;
}














