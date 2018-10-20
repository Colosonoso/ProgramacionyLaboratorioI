#include <stdio.h>
#include <stdlib.h>

/*segmento de codigo(se cargan las funciones).
memoria estatica
despues hay una parte que es stack pila(se carga aca)
heap monton(se cargan en tiempo de ejecucion)
libre*/


/*int numero=5;
numero=nombre fantasia
;=valor
direccion de memoria(si queremos saberlo usamos el & y si se lo anteponemos a la variable nos la devuelve)
*/

void miFuncion(int* x);

int main()
{
    int x;


    miFuncion(&x);

    printf("el numero es %d", x);

    return 0;

}
void miFuncion(int* x)
{
  *x=38;
}



