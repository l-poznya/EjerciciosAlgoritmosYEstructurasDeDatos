/*13. Se desea obtener cierta información correspondiente a los empleados de
una empresa. La misma tiene 25 empleados y los datos que tiene son: DNI,
nombre, estado civil, dirección, teléfono, sexo y edad. Se pide:
− Listado de los empleados que estén próximos a jubilarse ordenados
alfabéticamente.
− Edad promedio de los empleados.
- Todos los datos de un empleado. (Al seleccionar esta opción, el
sistema debe solicitar el DNI)
− El usuario deberá poder elegir la operación a realizar*/
#include <iostream>

using namespace std;

struct Empleado
{
    int dni;
    char nombre[50];
    char estadoCivil[1];
    char direccion[100];
    int telefono;
    char sexo;
    int edad;

};
int main()
{
   Empleado emps[25];

}

//=========================================================
void EdadPromedio(Empleado emps[], int cantEmpleados)
{
    int suma;
    for(int i=0; i<cantEmpleados; i++)
    {
        suma+=emps[i].edad;
    }
    float edadPromedio;

    edadPromedio = suma/cantEmpleados;

    cout<<"La edad promedio de los trabajadores es: "<<edadPromedio<<endl;
}

//=========================================================
//Buscar empleado por dni

void
