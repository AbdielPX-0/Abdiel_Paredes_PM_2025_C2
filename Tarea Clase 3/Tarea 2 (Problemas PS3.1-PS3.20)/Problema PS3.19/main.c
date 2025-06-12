#include <stdio.h>

void main(void)
{
    int I, J, N = 8;

    for (I = 1; I <= N; I++) {
        for (J = 0; J < I; J++)
            printf("%d ", (I + J) % 10);
        for (J = I - 1; J >= 1; J--)
            printf("%d ", (I + J - 1) % 10);
        printf("\n");
    }
}
