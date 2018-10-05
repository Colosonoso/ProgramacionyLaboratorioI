#include <stdio.h>
#include <stdlib.h>

typedef struct
{

 int id;
 char descripcion[20];
}eComida;

typedef struct
{

 int dia;
 int mes;
 int anio;
}eFecha;


typedef struct
{

 int id;
 int idcomida;
 int idEmp;
 eFecha fecha;
}eAlmuerzo;






int main()
{

}
