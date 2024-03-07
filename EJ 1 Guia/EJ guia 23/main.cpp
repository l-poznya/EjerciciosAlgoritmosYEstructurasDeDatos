/* Ej. MI-23.
Dado un conjunto de valores, que finaliza con un valor nulo, determinar e
imprimir (si hubo valores):
a) El valor máximo negativo
b) El valor mínimo positivo
c) El promedio de todos los valores.*/

 #include <iostream>

using namespace std;

int main()
{
   int valor,maxNeg,minPosi,suma,cont;

   int flagPrimerNegativo = 0;
   int flagPrimerPositivo = 0;

   cont = 0;
   suma = 0;

   do
   {
       cout <<"Ingrese valor"<<endl;
       cin >> valor;

       suma += valor;


       if(valor<0)
       {
          if( valor > maxNeg || flagPrimerNegativo==0)
          {
              maxNeg = valor;
              flagPrimerNegativo = 1;
          }

       }
       else if(valor>0)
       {
           if( valor < minPosi || flagPrimerPositivo ==0)
           {
               minPosi = valor;
               flagPrimerPositivo = 1;
           }
       }

       if(valor !=0)
       {
           cont ++;
       }



   }
   while(valor !=0);

   cout <<"El maximo negativo es "<<maxNeg<<endl;
   cout <<"El minimo positivo es "<<minPosi<<endl;
   cout <<"El promedio es "<<suma/cont<<endl;

}
