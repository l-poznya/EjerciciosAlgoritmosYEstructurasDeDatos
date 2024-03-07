/*Ej. MI-33:
Desarrollar una función que calcule el máximo común divisor de dos números
enteros A, B con el siguiente algoritmo:

1) Dividir A por B, y calcular el resto (0 < R < B)
2) Si R = 0, el MCD es B, si no seguir en 3)
3) Reemplazar A por B, B por R, y volver al paso 1)
*/
#include <iostream>

using namespace std;
int MCD(int A, int B);

int main()
{
    int mcd;
    mcd = MCD(18,24);
    cout<<mcd;

}

int MCD(int A, int B)
{
    int resto;
    while(B>0)
    {
      resto = A % B;
      A = B;
      B = resto;

    }
    return A;

}
