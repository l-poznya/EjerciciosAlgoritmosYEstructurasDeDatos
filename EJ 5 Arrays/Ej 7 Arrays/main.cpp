/*7. Confeccionar un subprograma que, dados dos vectores
de números enteros liste el contenido de ambos pero en
forma ordenada. Utilice el algoritmo de apareo.
*/
#include <iostream>
#define VACIO 0
using namespace std;

int cantElem(int v[], int tamFisico);
void apareo(int v1[], int tam1 ,int v2[],int tam2, int vR[]);

int main()
{
    int v1[10] = {12,24,36,48,59};
    int v2[5] = {14,22,37,41,75};
    int vRe[20] = {0};

    apareo(v1,cantElem(v1,10),v2,cantElem(v2,5),vRe);

    for(int x=0; x< cantElem(vRe,20); x++)
    {
        cout<<"Vresultado ["<<x<<"]"<<vRe[x]<<endl;
    }
}

int cantElem(int v[], int tamFisico)
{
    int tamLogico = 0;
    while(tamLogico<tamFisico && v[tamLogico]!=VACIO)
    {
        tamLogico++;
    }
    return tamLogico;

}


void apareo(int v1[], int tam1 ,int v2[],int tam2, int vR[])
{
    int i = 0;
    int j = 0;
    int k = 0;

    while(i<tam1 && j<tam2)
    {
        if(v1[i]<v2[j])
        {
            vR[k]=v1[i];
            i++;
        }
        else
        {
            vR[k]=v2[j];
            j++;
        }
        k++;
    }
    for (int cont= i; cont<tam1; cont++)
    {
        vR[k] = v1[cont];
        k++;
    }
    for (int cont = j; cont<tam2; cont++)
    {
        vR[k] = v2[cont];
        k++;
    }




}
