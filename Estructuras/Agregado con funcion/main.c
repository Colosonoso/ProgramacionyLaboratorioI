#include <stdio.h>
#include <stdlib.h>

typedef struct
{

    int identidad;
    char nombre[30];
    float promedio;
    int edad;

}sTrabajador;

void mostrarUnTrabajador(sTrabajador);
sTrabajador pedirTrabajador();

int main()
{
    sTrabajador elTrabajador;
    elTrabajador=pedirTrabajador();

    mostrarUnTrabajador(elTrabajador);

    return 0;
}

sTrabajador pedirTrabajador()
{
   sTrabajador elTrabajado;


    printf("Ingrese una identidad: ");
    scanf("%d",&elTrabajado.identidad);

    printf("Ingrese un nombre: ");
    fflush(stdin);
    gets(elTrabajado.nombre);

    printf("Ingrese un promedio: ");
    scanf("%f",&elTrabajado.promedio);

    printf("Ingrese una edad: ");
    scanf("%d",&elTrabajado.edad);
 }

 void mostrarUnTrabajador(sTrabajador, elTrabajador)
{

printf("%d--%s--%f--%d", elTrabajador.identidad, elTrabajador.nombre, elTrabajador.promedio,elTrabajador.edad);
}
