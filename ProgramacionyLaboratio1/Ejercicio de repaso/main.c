#include <stdio.h>
#include <stdlib.h>

int getInt(char Mensaje[],char MensajeError[],int LimiteInferior, int LimiteSuperior);

int main()
{



   int num;

   num=getInt("Ingrese una edad " ,"Error. Reingrese de nuevo\n" ,18,65);
   printf("la edad es %d\n",num);

    return 0;
}
int getInt(char Mensaje[],char MensajeError[],int LimiteInferior,int LimiteSuperior)
{

   int numero;
   printf("%s", Mensaje);
   scanf("%d", &numero);

   while(numero<LimiteInferior || numero >LimiteSuperior)
     {
      printf("%s", MensajeError);
      scanf("%d", &numero);
     }

   return numero;

}
