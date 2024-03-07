/*Ej. MI-26:
Un buque de carga traslada 100 contenedores a tres diferentes puertos del país.
Los puertos se identifican con los números 1, 2 y 3.
De cada contenedor que el buque traslade se registran los siguientes datos:
- Identificación del contenedor
- Peso del contenedor en kg
- Puerto de arribo(un valor de 1 a 3).
Se pide calcular e informar:
1) El peso total que el buque debe trasladar
2) La identificación del contenedor de mayor peso
3) La cantidad de contenedores que debe trasladar a cada puerto
*/#include <iostream>

using namespace std;

int main()
{
    int idCon,idPuerto,sumaPeso,mayorPeso,idMayorPeso;
    float pesoCont;

    int contPuertoUno = 0;
    int contPuertoDos = 0;
    int contPuertoTres = 0;
    int flagPrimerCont = 0;

    for(int i = 1; i<=5; i++)
    {
        cout << "Informacion del contenedor numero: " << i<<endl;

        cout << "ID contenedor:"<<endl;
        cin >> idCon;

        cout <<"Peso del contenedor en kg"<<endl;
        cin >> pesoCont;

        cout<<"Puerto de arribo(1,2,3)"<<endl;
        cin >> idPuerto;

        sumaPeso += pesoCont;

        if(pesoCont > mayorPeso || flagPrimerCont == 0 )
        {
            mayorPeso = pesoCont;
            idMayorPeso = idCon;
            flagPrimerCont = 1;
        }

        switch(idPuerto)
        {
         case 1:
             contPuertoUno++;
             break;
         case 2:
             contPuertoDos++;
             break;
         case 3:
             contPuertoTres++;
             break;

        }

    }


    cout << "Peso total que el buque debe trasladar: "<<sumaPeso<<endl;
    cout << "La identificación del contenedor de mayor peso:"<<idMayorPeso<<endl;
    cout << "Los contenedores del puerto Nro1 son: "<<contPuertoUno<<endl;
    cout << "Los contenedores del puerto Nro2 son: "<<contPuertoDos<<endl;
    cout << "Los contenedores del puerto Nro3 son: "<<contPuertoTres<<endl;
}
