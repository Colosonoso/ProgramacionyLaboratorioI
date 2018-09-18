#include <stdio.h>
#include <stdlib.h>

typedef struct
{

    int identidad;
    char nombre[30];
    float promedio;


}sTrabajador;



int main()
{

    sTrabajador elTrabajador;
    sTrabajador elSegundoTrabajador;

    printf("Ingrese una identidad: ");
    scanf("%d",&elTrabajador.identidad);

    printf("Ingrese un nombre: ");
    fflush(stdin);
    gets(elTrabajador.nombre);

    printf("Ingrese un promedio: ");
    scanf("%f",&elTrabajador.promedio);


    elSegundoTrabajador= elTrabajador;




    printf("%d--%s--%.2f",elSegundoTrabajador.identidad,elSegundoTrabajador.nombre,elSegundoTrabajador.promedio);

    /*la primera propiedad de la estructura es que se pueden asignar entre si*/
    /* no se puede comparar una estructura con otra*/

    return 0;
}

