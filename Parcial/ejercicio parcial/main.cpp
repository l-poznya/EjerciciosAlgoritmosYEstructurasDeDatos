#include <iostream>

using namespace std;

void carga(int v[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        if( !v[i] && i>=1)
        {
            cout <<  v[i]<< endl;
            v[i]+=10;
            cout <<  v[i]<< endl<<endl;
        }
    }

    return;
}


int main()
{
   int v1[10]={31,32,33,34,35};

      for(int i=0; i<10; i++)
   {
       cout<<"En la posicion "<<i<<" esta "<<v1[i]<<" "<<endl<<endl;
   }

   carga(v1,10);
   for(int i=0; i<10; i++)
   {
       cout<<v1[i]<<" ";
   }
}
