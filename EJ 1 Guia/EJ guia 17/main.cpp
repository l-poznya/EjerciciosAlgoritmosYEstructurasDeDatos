/*Ej. MI-17:
Se ingresa un conjunto de valores float, cada uno de los cuales representan el
sueldo de un empleado, excepto el último valor que es cero e indica el fin del conjunto.
Se pide desarrollar un programa que determine e informe:
a) Cuántos empleados ganan menos $1.520.
b) Cuántos ganan $1.520 o más pero menos de $2.780.
c) Cuántos ganan $2.780 o más pero menos de $5.999.
d) Cuántos ganan $5.999 o más.
*/#include <iostream>

using namespace std;

int main()
{
   int conA,conB,conC,conD;
   float x;

   conA = 0;
   conB = 0;
   conC = 0;
   conD = 0;

   do
   {

      cout << "==========Ingrese sueldo==========" <<endl;
      cout << "          0 para salir            " <<endl;
      cin >> x;

      if(x<1.520)
      {
          conA++;
      }
      else if(x>=1.520 || x<2.780)
      {
          conB++;
      }
      else if(x>=2.780 || x<5.999)
      {
          conC++;
      }
      else if(x>5.999)
      {
          conD++;
      }

   }while(x!=0);

    cout << "Empleados ganan menos $1.520 :           "<<conA<<endl;
    cout << "Ganan $1.520 o más pero menos de $2.780: "<<conB<<endl;
    cout << "Ganan $2.780 o más pero menos de $5.999: "<<conC<<endl;
    cout << "Cuántos ganan $5.999 o más             : "<<conD<<endl;
}
