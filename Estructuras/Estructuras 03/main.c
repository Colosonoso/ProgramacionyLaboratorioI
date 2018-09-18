#include <stdio.h>
#include <stdlib.h>
#define A 3

typedef struct
 {
    int identidad;
    char nombre[30];
    float promedio;
    int edad;

}sTrabajador;

void mostrarUntrabajador(sTrabajador);
sTrabajador pedir Trabajador();

void cargarlistadodeTrabajadores(sTrabajador[], int);
void mostrarlistadodeTrabajadores(sTrabajador[], int);

int main()
{


   sTrabajador=listadoMain[A];
   int i;


   for(i=0; i<A; i++)
    {

     printf("Ingrese una identidad: ");
    scanf("%d",listadoMain[i].legajo);

    printf("Ingrese un nombre: ");
    fflush(stdin);
    gets(listadoMain[i].nombre);

    printf("Ingrese un promedio: ");
    scanf("%f",&listadoMain[i].promedio);

    printf("Ingrese una edad: ");
    scanf("%d",&listadoMain[i].edad);
    }

    for(i=0; i<A; i++)
     {
      mostrarUnTrabajador(listadoMain[i]);
     }
    return 0;
}
void cargarlistadodeTrabajadores(sTrabajador[], int tam)
{
   int i;
   for(i=0; i<tam; i++)
    {
    listado[i]=pedirTrabajador();
    }
}

void mostrarlistadodeTrabajadores(sTrabajador[], int tam);
{
    int i;

    for(i=0; i<tam; i++)
    {



    }

}
