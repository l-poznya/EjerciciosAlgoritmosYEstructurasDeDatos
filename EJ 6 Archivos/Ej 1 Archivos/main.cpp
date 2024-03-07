






/*1. Escriba v un programa que permita a un usuario
ingresar n valores float y se guarden en un archivo,
el número n lo informa al comienzo del programa.
Al finalizar el programa debe listar
todos los números guardados en el archivo.


*/ #include <iostream>

using namespace std;

int main()
{
    int n, pos;
    float x;


//El usuario digita la cantidad de numeros a
//giardar en el archivo

    cout<<"Cantidad de numeros a digitar"<<endl;
    cin>>n;

//Manejar el archivo

    FILE * f;

    f = fopen("archivo","ab");

    if(!f)
    {
        cout<<"ERROR no se pudo abrir el archivo"<<endl;
        return 1;
    }

    for(int i = 0; i < n; i++)
    {
        cout<<"Ingrese valor numero"<<i+1<<endl;
        cin>>x;
        fwrite(&x,sizeof(float),1,f);
    }
    fclose(f);

//Leer el archivo
    f = fopen("archivo","rb");
    int i = 0;
    if(f)
    {
       while(fread(&x,sizeof(float),1,f))
       {
           cout<<"byte "<<i*sizeof(float)<<" = "<<x<<endl;
           i++;
       }
      fclose(f);
    }


}


















