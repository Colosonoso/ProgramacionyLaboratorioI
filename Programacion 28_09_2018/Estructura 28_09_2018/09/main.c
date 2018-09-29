#include <stdio.h>
#include <stdlib.h>
#define TAM 10

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    int isEmpty;
} eEmpleado;

int menu();
void mostrarEmpleado(eEmpleado unEmpleado);
void inicializarEmpleados(eEmpleado lista[], int tam);
int buscarlibre(eEmpleado lista[], int tam);
int buscarEmpleado(eEmpleado lista[], int tam, int legajo);
void altaEmpleado(eEmpleado lista[], int tam);
void bajaEmpleado(eEmpleado lista[], int tam);
int main()
{

    char seguir='s';
    eEmpleado Empleados[TAM];
    inicializarEmpleados(Empleados,TAM);

    do
    {


        switch(menu())
        {


        case 1:
        altaEmpleado(Empleados,TAM);
        system("pause");

        break;
    case 2:
        printf("Baja\n\n");
        system("pause");
        break;
    case 3:
        printf("Modificacion\n\n");
        system("pause");
        break;
    case 4:
        printf("Listar empleados\n\n");
        system("pause");
    case 5:
        printf("Ordenar empleados\n\n");
        system("pause");
    case 6:
        printf("Salir\n");
        system("pause");

        }
    }while (seguir='n');

    return 0;
}


int menu()
{

    int opcion;

    system("cls");
    printf("\n*** Menu de opciones ***\n\n");
    printf("1- Alta\n");
    printf("2- Baja\n");
    printf("3- Modificacion\n");
    printf("4- Listar empleados\n");
    printf("5- Ordenar empleados");
    printf("6- Salir");

    scanf("%d", &opcion);

    return opcion;

}
void inicializarEmpleados(eEmpleado lista[], int tam)
{


  for(int i=0; i<tam; i++)
    {

      lista[i].isEmpty=1;
    }

}
void mostrarEmpleado(eEmpleado unEmpleado)
{

    printf("%d %s %c %2.f\n",unEmpleado.legajo,unEmpleado.nombre,unEmpleado.sexo,unEmpleado.sueldo);


}
void mostrarEmpleados(eEmpleado lista[], int tam)
{

   system("cls");
   printf("Legajo Nombre Sexo Sueldo\n\n");

   for(int i=0; i< tam; i++)

    {


        if(lista[i].isEmpty==0)
        {
        mostrarEmpleado(lista[i]);
        }

    }

}

int buscarlibre(eEmpleado lista[], int tam)
{

  int indice=-1;

  for(int i=0; i<tam; i++)

   {


      if(lista[i].isEmpty==1)
        {
         indice=i;
         break;
        }

    }


    return indice;
}

int buscarEmpleado(eEmpleado lista[], int tam, int legajo)
{

  int indice=-1;

  for(int i=0; i<tam; i++)

   {


      if(lista[i].legajo== legajo && lista[i].isEmpty==0)
        {
         indice=i;
         break;
        }

    }


    return indice;
}

void  altaEmpleado(eEmpleado lista[], int tam)
{


int indice;
int existe;
int legajo;

eEmpleado Nuevoempleado;


indice=buscarlibre(lista,tam);


 if(indice== -1)

 {
     printf("No hay lugar en el sistema");
     system("pause");
 }

 else

 {
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);
 }
existe=buscarEmpleado(lista,tam,legajo);

    if(existe !=-1)
     {

         printf("ya existe un empleado con el legajo %d\n", &legajo);
         mostrarEmpleado(lista[existe]);
         system("pause");

     }

     else

     {
        Nuevoempleado.legajo=legajo;

        printf("Ingrese nombre");
        fflush(stdin);
        gets(Nuevoempleado.nombre);

        printf("Ingrese sexo");
        fflush(stdin);
        scanf("%c", &Nuevoempleado.sexo);

        printf("Ingrese el sueldo");
        fflush(stdin);
        scanf("%f", Nuevoempleado.sueldo);

        Nuevoempleado.isEmpty=0;

       lista[indice]=Nuevoempleado;

        printf("Se ha dado de alta a un nuevo empleado");

        system("pause");

     }

void bajaEmpleado(eEmpleado lista[], int tam)

}
