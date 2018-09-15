#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[20];
    char auxcad[50];


    printf("Ingrese un nombre\n");
    gets(auxcad);

   while(strlen(auxcad)>19)
   {

       printf("Error. Nombre demasiado largo. Reingrese nombre\n");
       gets(auxcad);

   }

   strcpy(nombre, auxcad);

   printf("Usted se llama %s\n", nombre);

    return 0;
}
