/*Ej. MI-12 Informar los primeros 100 números naturales y su sumatoria*/
#include <iostream>

using namespace std;

int main()
{
    int i,sum;

    for(i=1; i<=100; i++)
    {
     cout<<" "<<i<<endl;

     sum = sum + i;
    }

    cout<<"La suma es: "<<sum<<endl;
}
