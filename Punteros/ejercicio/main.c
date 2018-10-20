#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec[5];



    for(int i=0; i <5; i++)

    {
    printf("Ingrese numero");
    scanf("%d", vec +i);
    }


    for(int i=0; i <5; i++)
    {

     printf(" %d", *(vec + i));

    }

    printf("\n\n");


    return 0;
}
