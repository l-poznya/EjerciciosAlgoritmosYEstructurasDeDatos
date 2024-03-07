/*
Ej. MI-15: Se realiza una inspección en una fábrica de pinturas, y se detectaron 20
infracciones. De cada infracción se tomó nota de los siguientes datos:
- Tipo de Infracción (1, 2, 3, ó 4)
- Motivo de la infracción
- Valor de la multa
- Gravedad de la infracción (‘L’,‘M’, ‘G’)
Se pide informar al final del proceso:
 Los valores totales de la multa a pagar de acuerdo al tipo de gravedad.
 La leyenda “Clausurar fábrica” si la cantidad de infracciones 3 y 4 con gravedad “G” sean
mayor a 3.*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int tipo,valorM;
    char motivo[400];
    char gravedad;
    int sumaL,sumaM,sumaG,clausurafabrica;

    sumaL = 0;
    sumaM = 0;
    sumaG = 0;
    clausurafabrica = 0;

    for(int i=1; i<=5; i++)
    {
      cout << " *****INFRACCION NUMERO "<<i<<" *****"<<endl;

      cout << "Tipo de infraccion: (1,2,3,4)"<<endl;
      cin >> tipo;

      while(tipo<1 || tipo>4)
      {
          cout <<"ingrese un numero valido"<<endl;
          cin >> tipo;
      }

      cout << "Motivo de infraccion"<<endl;
      cin >> motivo;

      getchar();//Limpiamos buffer de teclado con una función de C
      fgets(motivo, 400, stdin); //se lee un texto de más de una palabra de hasta 400 caracteres

      cout << "Valor"<<endl;
      cin >> valorM;

      cout << "Gravedad de la infraccion (L M G)"<<endl;
      cin >> gravedad;

      while(gravedad != 'L' && gravedad !='M' && gravedad!='G')
      {
          cout <<"Ingrese una letra valida(L M G)"<<endl;
          cin >> gravedad;
      }

      switch(gravedad)
       {
         case 'L':
          sumaL+=valorM;
          break;

         case 'M':
          sumaM+=valorM;
          break;

         case 'G':
          sumaG+=valorM;
          break;

       }

       if ((tipo==3 || tipo==4) && (gravedad='G'))
       clausurafabrica++;


    }

    cout <<"Infracciones L a pagar $ "<<sumaL<<endl;
    cout <<"Infracciones M a pagar $ "<<sumaM<<endl;
    cout <<"Infracciones G a pagar $ "<<sumaG<<endl;

    if(clausurafabrica > 3)
    {
        cout <<"CLAUSURA LA FABRICA"<<endl;
    }
}
