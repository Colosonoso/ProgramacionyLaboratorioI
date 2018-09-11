#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



int main()
{
    char nombre[20]={"JorgeVan"};
    char apellido[20]={"Cooperfield"};
    char nombreYApellido[40]={nombre,apellido};

    strcat(nombreYApellido,nombre);
    strcat(nombreYApellido,"");
    strcat(nombreYApellido,apellido);
    strlen(nombreYApellido);

    nombreYApellido[0]= tolower(nombreYApellido[0]);

    fgets(nombre,20,stdin);

    int cant=strlen(nombreYApellido);

    for(int i=0; i<cant; i++)
    {

        if(nombreYApellido[i]=="")

        {
            nombreYApellido[i+1]=tolower(nombreYApellido[i+1]);
        }

    }


    printf("%s",strcat(nombre,apellido));

    return 0;
}
void Cadena(char nombre, char apellido,int eltamaño)
{
