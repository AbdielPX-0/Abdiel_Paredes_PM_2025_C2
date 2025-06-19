#include <stdio.h>
/* Apuntadores, variables y valores. */
void main(void)
{
    int X = 3, Y = 7, Z[5] = {2, 4, 6, 8, 10};

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    int *IX; /* IX representa un apuntador a un entero. */
    IX = &X; /* IX apunta a X. IX tiene la dirección de X. */
    Y = *IX; /* Y toma el valor de X, ahora vale 3. */
    *IX = 1; /* X se modifica, ahora vale 1. */

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = &Z[2]; /* IX apunta al tercer elemento del arreglo Z. */
    Y = *IX; /* Y toma el valor de Z[2], ahora vale 6. */
    *IX = 15; /* Z[2] se modifica, ahora vale 15. */

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    X = *IX + 5; /* X se modifica, ahora vale Z[2] + 5 = 20. */
    *IX = *IX - 5; /* Z[2] se modifica, ahora vale 10. */

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    ++*IX;     /* Z[2] ahora vale 11. */
    *IX += 1;  /* Z[2] ahora vale 12. */

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    X = *(IX + 1); /* X toma el valor de Z[3] = 8. */
    Y = *IX;       /* Y toma el valor de Z[2] = 12. */

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = IX + 1; /* IX ahora apunta a Z[3]. */
    Y = *IX;     /* Y ahora vale 8. */

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = IX + 4; /* IX se modifica. Se mueve 4 posiciones y apunta fuera del arreglo. */
    Y = *IX; /* Error lógico: Y toma valor basura de memoria fuera del arreglo. */

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = &X; /* IX apunta a la variable X. */
    IX = IX + 1; /* IX se mueve una posición adelante. */
    X = *IX; /* X toma valor basura de una celda fuera de su espacio. */

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
}
