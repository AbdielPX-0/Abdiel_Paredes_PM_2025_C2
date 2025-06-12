#include <stdio.h>

void main (void)
// NUM es el entero positivo ignrese

{
    int NUM;
    int I = 1;
    int RES;
    int CON;
    int J;

    printf("Ingrese la variable hasta la que desea operar: ");
    scanf("%d", &NUM);
 for (I= 2; I <= NUM; I++)
    {
   CON = 0;
    for (J= 1; J <= I; J++){
        {
       if (I%J == 0)
       {
        CON++;
        }
        }
    }
       if (CON == 2)
        {
        printf("%d\t", I);
        }
}
}


