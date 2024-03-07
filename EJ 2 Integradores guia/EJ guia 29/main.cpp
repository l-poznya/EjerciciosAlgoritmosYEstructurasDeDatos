/*Ej. MI-29:
Dado un número entero positivo entre 1 y 3999 informar su correspondiente
número Romano*/
/*
I =  1
V =  5
X =  10
L =  50
C = 100
D = 500
M = 1000
*/
#include <iostream>

using namespace std;

int main()
{
    int n,unidades,centena,decena,millar;

    cout <<"=====Ingrese un numero positivo entre 1 y 3999====="<<endl;
    cin >>n;

    while( n<1 || n>3999)
    {
        cout<<"Ingrese un numero valido"<<endl;
        cin >>n;
    }

    unidades = n%10; n/=10;
    decena   = n%10; n/=10;
    centena  = n%10; n/=10;
    millar   = n%10; n/=10;

    switch(millar)
    {
        case 1: cout<<"M";break;
        case 2: cout<<"MM";break;
        case 3: cout<<"MMM";break;
    }
    switch(centena)
    {
        case 1: cout<<"C"    ;break;
        case 2: cout<<"CC"   ;break;
        case 3: cout<<"CCC"  ;break;
        case 4: cout<<"CD"   ;break;
        case 5: cout<<"D"    ;break;
        case 6: cout<<"DC"   ;break;
        case 7: cout<<"DCC"  ;break;
        case 8: cout<<"DCCC" ;break;
        case 9: cout<<"CM"   ;break;
    }
    switch(decena)
    {
        case 1: cout<<"X"    ;break;
        case 2: cout<<"XX"   ;break;
        case 3: cout<<"XXX"  ;break;
        case 4: cout<<"XL"   ;break;
        case 5: cout<<"X"    ;break;
        case 6: cout<<"XL"   ;break;
        case 7: cout<<"XLL"  ;break;
        case 8: cout<<"XLLL" ;break;
        case 9: cout<<"XC"   ;break;
    }
        switch(unidades)
    {
        case 1: cout<<"I"    ;break;
        case 2: cout<<"II"   ;break;
        case 3: cout<<"III"  ;break;
        case 4: cout<<"IV"   ;break;
        case 5: cout<<"V"    ;break;
        case 6: cout<<"VI"   ;break;
        case 7: cout<<"VII"  ;break;
        case 8: cout<<"VIII" ;break;
        case 9: cout<<"IX"   ;break;
    }



}
