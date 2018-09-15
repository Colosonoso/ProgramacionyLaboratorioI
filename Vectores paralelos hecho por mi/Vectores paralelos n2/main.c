#include <stdio.h>
#include <stdlib.h>
#define TAM 2
#include <string.h>

void OrdenarAlumnos(int legajo[],char nombre[][20],int pparcial[], int sparcial[], float promedio[],char sexo[],int tam);

int main()
{
    int legajos[TAM];
    int primerparcial[TAM];
    int segundoparcial[TAM];
    float promedios[TAM];
    char sexos[TAM];
    char nombres[TAM][20];



    for(int i=0; i< TAM; i++)

    {

       printf("Ingrese un legajo: \n");
       scanf("%d", &legajos[i]);

       printf("Ingrese la nota del primer parcial: \n");
       scanf("%d", &primerparcial[i]);

       printf("Ingrese la nota del segundo parcial: \n");
       scanf("%d", &segundoparcial[i]);

       promedios[i]=(float)(primerparcial[i] + segundoparcial[i])/2;

       printf("Ingrese un tipo de sexo: \n");
       fflush(stdin);
       scanf("%c", &sexos[i]);


       printf("Ingrese un nombre: \n");
       fflush(stdin);
       gets(nombres[i]);

    }

    system("cls");

    printf("  legajo     primerparcial   segundoparcial    promedio     sexo       nombre\n");

    for(int i=0; i< TAM; i++)
    {

        printf("%d          %d                %d               %f        %c          %s", legajos[i], primerparcial[i], segundoparcial[i], promedios[i],sexos[i],nombres[i]);

    }


   // OrdenarAlumnos(legajos,nombres,sexos,primerparcial,segundoparcial,promedios,TAM);

    printf("\n");

    return 0;
}

void OrdenarAlumnos(int legajo[],char nombre[][20],int pparcial[], int sparcial[], float promedio[],char sexo[],int tam)
{
   int i;
   int j;
   int auxInt;
   float auxFloat;
   char auxChar;
   char auxCad[20];

   for(i=0; i <tam -1; i++)
     {

        for(int j=i+1; j < tam; j++)
        {

            if(sexo[i]< sexo[j])
              {
                 auxInt=legajo[i];
                 legajo[i]=legajo[j];
                 legajo[j]=auxInt;

                 auxInt=pparcial[i];
                 pparcial[i]=pparcial[j];
                 pparcial[j]=auxInt;

                 auxInt=sparcial[i];
                 sparcial[i]=sparcial[j];
                 sparcial[j]=auxInt;

                 auxFloat=promedio[i];
                 promedio[i]=promedio[j];
                 promedio[j]=auxFloat;

                 auxChar=sexo[i];
                 sexo[i]=sexo[j];
                 sexo[j]=auxChar;

                 strcpy(auxCad,nombre[i]);
                 strcpy(nombre[i], nombre[j]);
                 strcpy(nombre[j], auxCad);
              }
         else if( sexo[i]==sexo[j] && strcmp(nombre[i], nombre[j]) >0)
         {
                 auxInt=legajo[i];
                 legajo[i]=legajo[j];
                 legajo[j]=auxInt;

                 auxInt=pparcial[i];
                 pparcial[i]=pparcial[j];
                 pparcial[j]=auxInt;

                 auxInt=sparcial[i];
                 sparcial[i]=sparcial[j];
                 sparcial[j]=auxInt;

                 auxFloat=promedio[i];
                 promedio[i]=promedio[j];
                 promedio[j]=auxFloat;

                 //strcmp compara una cadena con otra y te devuelve uno con el que esta primero en el diccionario

                 auxChar=sexo[i];
                 sexo[i]=sexo[j];
                 sexo[j]=auxChar;

                 strcpy(auxCad,nombre[i]);
                 strcpy(nombre[i], nombre[j]);
                 strcpy(nombre[j], auxCad);
         }

    }





     }


}

