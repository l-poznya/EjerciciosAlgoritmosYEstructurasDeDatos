/*Ej. MI-13: Dados N y M números naturales, informar su producto por sumas sucesivas.*/
#include <iostream>

using namespace std;

int main()
{
    int N,M,producto,i;

    cout << "Ingrese N y M " << endl;
    cin >> N >> M;

    for(i=0; i<N; i++)
    {
      producto+=M;
    }

    cout <<"El producto entre "<<N<<" * "<<M<<" = "<<producto<< endl;
    return 0;
}
