#include <iostream>

using namespace std;


int main()
{
   int x = 21;

   //abro el canal
   FILE * probando;
   //vinculo a un archivo
   //probando = fopen("nombre del archivo","ruta","modo");
   probando = fopen("firstFile","w");

   if(!probando)
   {
       cout<<"ERROR"<<endl;
   }
   fwrite(&x,sizeof(int),1,probando);
   fclose(probando);

}

//LECTURA DE ARCHIVOS

int leerArchivo( char ruta [])
{
    FILE *f;
    int faux;

    if(f=fopen("file","rb"))
    {
        fread(&faux,sizeof(int),1,f);
        while(!feof(f))
        {
            cout<<"Leyo: "<<faux<<endl;
            fread(&faux,sizeof(int),1,f);
        }
        fclose(f);
        return 0;
    }
    else
    {
        return 1;
    }
}


//ESCRIBIR DE ARCHIVOS

int escribirArchivo( char ruta [])
{
    FILE * f;
    int faux,n,i;

    cout<<"Ingrese cantidad de elementos: "<<endl;
    cin>>n;

    if(f=fopen("file","ab"))
    {
        for(i=0; i<n; i++)
        {
            cout<<"Ingrese valor: "<<i+1<<endl;
            cin>>faux;
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


