/*
/*1. Escriba un programa que permita a un usuario
ingresar n valores float y se guarden en un archivo,
el número n lo informa al comienzo del programa.
Al finalizar el programa debe listar
todos los números guardados en el archivo.



2. Agregue al código anterior la funcionalidad
para poder modificar un número, solicitando al
usuario en qué posición está el número que quiere
 modificar y cuál es el nuevo valor. Los
cambios deben ser guardados en el archivo. */



#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int cargarArchivo(char ruta[]);
int modificarEllemento(char ruta[]);
int mostrarArchivo(char ruta []);

int main()
{
  char opcion;
  char ruta[] = "pepe";

  do
  {
      cout<<"=====ELIJA UNA OPCION====="<<endl;
      cout<<"1- Ingresar elementos"<<endl;
      cout<<"2- Modificar elemento"<<endl;
      cout<<"3- Mostrar elementos "<<endl;
      cout<<"ESC- salir"<<endl<<endl;

      do
      {
         opcion = getch();
      }while(opcion!='1' && opcion!='2' &&
             opcion!='3' && opcion!=27);

       switch(opcion)
       {
           case '1':
           cargarArchivo(ruta);
           break;

           case '2':
           modificarEllemento(ruta);
           break;

           case '3':
           mostrarArchivo(ruta);
           break;
       }


  }while(opcion!=27);
  getch();


}
//Cargar nuevos elementos al archivo
int cargarArchivo(char ruta[])
{
   int faux,i,n;

   FILE * f;

   cout<<"Cantidad de elementos a ingresar"<<endl;
   cin>>n;

   if(f=fopen(ruta,"ab"))
   {
      for(i=0; i<n; i++)
      {
          cout<<"valor[ "<<i+1<<"]"<<endl<<endl;
          cin>>faux;
          fwrite(&faux, sizeof(int),1,f);
      }
      fclose(f);
      return 0;
   }
   else
   {
       return 1;
   }
}

//Modificar elementos del archivo
int modificarEllemento(char ruta[])
{
    int faux,pos,tam,cant;

    FILE* f;


    if(f=fopen(ruta,"rb+"))
    {
      cout<<"Ingrese la posicion del elemento a cambiar: "<<endl;
      cin>>pos;

      fseek(f,0,SEEK_END);
      tam = ftell(f);

      cant=tam/sizeof(int);

      if(pos>cant)
      {
          cout<<"ERROR-no existe posicion"<<endl;
      }
      else
      {
          cout<<"Ingrese el nuevo valor "<<endl;
          cin>>faux;
          fseek(f,sizeof(int) * (pos - 1),SEEK_SET);
          fwrite(&faux,sizeof(int),1,f);
      }


       fclose(f);
       return 0;
    }
    else
    {
        return 1;
    }
}

//Mostrar contenido del archivo
int mostrarArchivo(char ruta [])
{
    int i,aux;

    FILE* f;

    if(f = fopen(ruta,"rb"))
    {
        while(fread(&aux, sizeof(int),1,f))
        {
            cout<<"byte "<<i*sizeof(int)<<" = "<<aux<<endl;
            i++;
        }
        fclose(f);
        return 0;
    }
    else
    {
        return 1;
    }
}






