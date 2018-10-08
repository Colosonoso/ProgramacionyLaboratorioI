#include <stdio.h>
#include <stdlib.h>
#include <parcial1.h>
#include <string.h>

#define TAM 10

void cargarclientes(eCliente clientes[]);
void cargarclientes(eCliente clientes[]);
void listarclientes(eCliente[], int tam);
void altaAlmuerzo(eAlmuerzo a[], int tama, eComida c[], int tamc, eEmpleado e[], int tame, eSector s[], int tams, int* pId);
int buscarLibreAlmuerzo(eAlmuerzo lista[], int tam);
void inicializarAlmuerzos(eAlmuerzo lista[], int tam);
void obtenerDescComida(eComida c[], int tamc, int idComida, char* cadena);
void mostrarAlmuerzo(eAlmuerzo unAlmuerzo, eComida c[], int tamc, eEmpleado e[], int tame);
void mostrarAlmuerzos(eAlmuerzo a[], int tama, eComida c[], int tamc, eEmpleado e[], int tame);


int main()
{

    char seguir = 's';
    eCliente clientes[10];
    eCategoria categoria[2];
    eJuego juego[20];

    cargarclientes(clientes);
    cargarcategoria(categoria);
    eCliente clientes[TAM];
    inicializarclientes(clientes,TAM);
    inicializarcategoria(categoria, 2);
    harcodearEmpleados(empleados);

    do
    {
        switch(menu())
        {
        case 1:
            altaCliente(clientes, TAM, categoria, 10);
            break;

        case 2:
            ModificarEmpleado(clientes, TAM, categoria, 10);
            system("pause");
            break;

       case 3:
            bajaEmpleado(clientes,TAM, categoria, 10);
            break;

        case 4:
        listarclientes(clientes, 10);
            system("pause");
            break;

        case 5:
            seguir = 'n';
            break;
        }
    }
    while(seguir == 's');

    return 0;
}

int menu()
{
    int opcion;

    system("cls");
    printf("\n*** Menu de Opciones ***\n\n");
    printf(" 1-  Alta\n");
    printf(" 2-  Modificacion\n");
    printf(" 3-  Baja\n");
    printf(" 4-  Listar los clientes\n");
    printf(" 5- Salir\n\n");
    printf(" Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}
void cargarclientes(eCliente clientes[])
{
    ecllientes cnt[]=
    {
        {1, "Lucas"},
        {2, "Ezequiel"},
        {3, "Lautaro"},
        {4, "Marcelo"},
        {5, "Ricardo"},
        {6, "Luciano"},
        {7, "Edward"},
        {8, "Bautista"},
        {9, "Giuliana"},
        {10, "Frank"}
    };

    for(int i=0; i < 20; i++)
    {
        clientes[i] = cnt[i];
    }
}

void listarclientes(eCliente c[], int tam)
{
    printf("\nLista de clientes\n\n");

    for(int i=0; i < tam; i++)
    {
        printf(" %d  %10s\n",c[i].id, c[i].descripcion);
    }
    printf("\n\n");
}

void Altadelcliente(eCliente* a, int tama, eCliente c[], int tamc, eCategoria e[], int tame, eFecha s[], int tams, int* pId)
{
    int  = *pId;
    int legajo;
    int idComida;
    efecha fecha;
    eCliente nuevocliente;
    int indice;

    indice = buscarcliente(a, tama);

    if(indice == -1)
    {
        printf("No se pueden cargar mas clientes\n\n");
    }
    else
    {
        nuevoclientvoid cargarSectores(eSector sectores[]);
void cargarComidas(eComida comidas[]);
void listarComidas(eComida c[], int tam);
void altaAlmuerzo(eAlmuerzo a[], int tama, eComida c[], int tamc, eEmpleado e[], int tame, eSector s[], int tams, int* pId);
int buscarLibreAlmuerzo(eAlmuerzo lista[], int tam);
void inicializarAlmuerzos(eAlmuerzo lista[], int tam);
void obtenerDescComvoid cargarSectores(eSector sectores[]);
void cargarComidas(eComida comidas[]);
void listarComidas(eComida c[], int tam);
void altaAlmuerzo(eAlmuerzo a[], int tama, eComida c[], int tamc, eEmpleado e[], int tame, eSector s[], int tams, int* pId);
int buscarLibreAlmuerzo(eAlmuerzo lista[], int tam);
void inicializarAlmuerzos(eAlmuerzo lista[], int tam);
void obtenerDescComida(eComida c[], int tamc, int idComida, char* cadena);
void mostrarAlmuerzo(eAlmuerzo unAlmuerzo, eComida c[], int tamc, eEmpleado e[], int tame);
void mostrarAlmuerzos(eAlmuerzo a[], int tama, eComida c[], int tamc, eEmpleado e[], int tame);ida(eComida c[], int tamc, int idComida, char* cadena);
void mostrarAlmuerzo(eAlmuerzo unAlmuerzo, eComida c[], int tamc, eEmpleado e[], int tame);
void mostrarAlmuerzos(eAlmuerzo a[], int tama, eComida c[], int tamc, eEmpleado e[], int tame);e.codigo= idcliente;

        mostrarEmpleados(e, tame, s, tams);

        printf("Ingrese codigo: ");
        scanf("%d", &codigo);

        nuevocliente.codigocliente = codigo;

        listarclientes(c, tamc);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nombre);




        nuevocliente.nombre = nombre;

        printf("\nIngrese dia: ");
        scanf("%d", &fecha.dia);

        printf("Ingrese mes: ");
        scanf("%d", &fecha.mes);

        printf("Ingrese anio: ");
        scanf("%d", &fecha.anio);

        nuevocliente.fecha = fecha;

        nuevocliente.isEmpty = 0;

        a[indice] = nuevocliente;

        *pId = idAlmuerzo + 1;
    }
}

int buscarLibrecliente(eCliente lista[], int tam)
{
    int indice = -1;

    for(int i=0; i < tam; i++)
    {
        if( lista[i].isEmpty == 1)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

void inicializarcliente(eCliente lista[], int tam)
{
    for(int i=0; i < tam; i++)
    {
        lista[i].isEmpty = 1;
    }
}

void mostrarcliente(eCliente a[], int tama, eCategoria c[], int tamc, eFecha e[], int tame)
{
    int flag = 0;

    system("cls");
    printf("codigo  nombre   sexo   telefono\n\n");

    for(int i=0; i < tama; i++)
    {
        if( a[i].isEmpty == 0)
        {
            mostrarcliente(a[i], c, tamc, e, tame);
            flag = 1;
        }
    }

    if(flag == 0)
    {
        printf("No hay clientes cargados");
    }
    printf("\n\n");
}


void mostrarAlmuerzo(eAlmuerzo unAlmuerzo, eComida c[], int tamc, eEmpleado e[], int tame)
{
    char descComida[20];
    int indice;void cargarSectores(eSector sectores[]);
void cargarComidas(eComida comidas[]);
void listarComidas(eComida c[], int tam);
void altaAlmuerzo(eAlmuerzo a[], int tama, eComida c[], int tamc, eEmpleado e[], int tame, eSector s[], int tams, int* pId);
int buscarLibreAlmuerzo(eAlmuerzo lista[], int tam);
void inicializarAlmuerzos(eAlmuerzo lista[], int tam);
void obtenerDescComida(eComida c[], int tamc, int idComida, char* cadena);
void mostrarAlmuerzo(eAlmuerzo unAlmuerzo, eComida c[], int tamc, eEmpleado e[], int tame);
void mostrarAlmuerzos(eAlmuerzo a[], int tama, eComida c[], int tamc, eEmpleado e[], int tame);
    eEmpleado empleado;

    obtenerDescComida(c, tamc, unAlmuerzo.idComida, descComida);
    indice = buscarEmpleado(e, tame, unAlmuerzo.idEmp);

    empleado = e[indice];

    printf("%4d %02d/%02d/%d  %d %10s  %10s\n", unAlmuerzo.id, unAlmuerzo.fecha.dia, unAlmuerzo.fecha.mes, unAlmuerzo.fecha.anio, empleado.legajo, empleado.nombre, descComida);
}

void obtenerDescComida(eComida c[], int tamc, int idComida, char* cadena)
{
    for(int i=0; i < tamc; i++)
    {
        if( c[i].id == idComida)
        {
            strcpy(cadena, c[i].descripcion);
        }
    }
}

}
