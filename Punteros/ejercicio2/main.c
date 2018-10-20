#include <stdio.h>
#include <stdlib.h>

typedef struct
{
   int dia;
   int mes;
   int anio;


}eFecha;


typedef struct
{

  int legajo;
  char nombre[20];
  float sueldo;
  eFecha fecha;


}eEmpleado;



int main()
{

    eEmpleado unempleado;

    eEmpleado* pEmployee;


    pEmployee= &unempleado;

    printf("Fecha de ingreso ");
    scanf("%d", &pEmployee->fecha.dia);


    printf("la fecha es %d", pEmployee->fecha.dia);

   return 0;




}


