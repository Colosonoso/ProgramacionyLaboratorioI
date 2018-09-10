#include <stdio.h>
#include <stdlib.h>

/* 1) Cantidad de positivos
 * 2) Cantidad de negativos
 * 3) Cantidad de ceros
 * 4) Cantidad de Pares
 * 5) Promedio de positivos
 * 6) Promedio de negativos
 * 7) Diferencia entre positivos y negativos
 * 8)Suma positivos
 * 9) Suma negativos
 * 10) Maximo y Mìnimo
 */




int main()
{
int Cantidaddepositivos;
int Cantidaddenegativos;
int Cantidaddeceros;
int Cantidaddepares;
float Promediodepositivos;
float Promediodenegativos;


printf("1-Cantidad de positivos\n");
printf("2-Cantidad de negativos\n");
printf("3-Cantidad de ceros\n");
printf("4-Cantidad de pares\n");
printf("5-Promedio de positivos\n");
printf("6-Promedio de negativos\n");
printf("7-Diferencia entre positivos y negativos\n");
printf("8-Suma de positivos\n");
printf("9-Suma de negativos\n");
printf("10-Maximos y Minimos\n");

    int opcion;
    int numero;

    printf("Ingrese un numero");
    scanf("%d", &numero);

    switch(opcion=0)
    {

        case 1: printf("Cantidad de positivos");


        if(numero<0)
            {
              printf("Error. Reingrese de nuevo");
            }

    }
    return 0;
}
