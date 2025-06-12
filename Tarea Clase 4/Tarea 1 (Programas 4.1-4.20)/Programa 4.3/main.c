#include <stdio.h>
/* Conflicto de variables con el mismo nombre. */

void f1(void);    /* Prototipo de función. */
int K = 5;        /* Variable global. */

void main (void)
{
    int I;
    for (I = 1; I <= 3; I++)
        f1();
}

void f1(void)
/* La función utiliza tanto la variable local K como la variable global K. */
{
    int K_local = 2; /* Variable local renombrada mínimamente. */
    K_local += K_local;
    printf("\n\nEl valor de la variable local es: %d", K_local);
    K = K + K_local;  // Accede a la global
    printf("\nEl valor de la variable global es: %d", K);
}
