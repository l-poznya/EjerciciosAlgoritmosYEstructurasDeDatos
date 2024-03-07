/*Ej. MI-34:
Desarrollar una función tal que dado un número entero positivo calcule y retorne
su factorial.*/
#include <iostream>

using namespace std;

int factorial(int n)
{
   int factorial = 1;
   for(int i=1; i<=n; i++)
   {
    factorial = factorial * i ;
   }
   return factorial;
}


int main()
{
    int n;
    cout<<"Ingrese un numero para obtener su factorial"<<endl;
    cin >>n;
    cout << "El facotrial de "<<n<<" es: "<<factorial(n)<< endl;

}
