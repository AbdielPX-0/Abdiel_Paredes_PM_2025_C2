#include <stdio.h>

int es_primo(int N)
{
    int D, C = 0;
    for (D = 1; D <= N; D++)
        if (N % D == 0)
            C++;
    return (C == 2);
}

void main(void)
{
    int N1, N2, I;
    printf("Ingrese dos enteros positivos: ");
    scanf("%d %d", &N1, &N2);

    for (I = N1; I <= N2 - 2; I++)
        if (es_primo(I) && es_primo(I + 2))
            printf("%d y %d son primos gemelos\n", I, I + 2);
}
