/*Ej. MI-9
Dados un mes y el año correspondiente informar cuantos días tiene el mes.
*/
#include <iostream>

using namespace std;

int main()
{
    int y,d,m;

    cout << "Ingrese mes(1-12)" << endl;
    cin >> m;

    cout << "ingrese anio" << endl;
    cin >> y;

    switch(m)
    {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:

        d = 31;
        break;

      case 4:
      case 6:
      case 9:
      case 11:

        d = 30;
        break;

      case 2:

        if((y % 4 == 0 && y % 100 !=0) || y % 400 == 0)
         {
          d = 29;
         }
         else
         {
          d = 28;
         }
         break;

      default:
        cout<<"Mes invalido"<<endl;


    }

    cout<<"EL mes "<<m<<" del anio "<<y<<" tiene "<<d<<" dias"<<endl;
    return 0;
}
