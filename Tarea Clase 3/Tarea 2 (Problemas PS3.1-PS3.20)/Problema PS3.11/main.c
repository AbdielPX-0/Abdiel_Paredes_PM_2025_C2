#include <stdio.h>

void main(void)
{
    int N, I, T;
    float VIN1, VIN2, VIN3, VIN4;
    float T1 = 0, T2 = 0, T3 = 0, T4 = 0;
    float A1 = 0, A2 = 0, A3 = 0;

    printf("Ingrese numero de años (maximo 3): ");
    scanf("%d", &N);

    if (N > 3) N = 3;

    for (I = 1; I <= N; I++)
    {
        printf("\nAño %d\n", I);

        printf("Vino tipo 1: "); scanf("%f", &VIN1);
        printf("Vino tipo 2: "); scanf("%f", &VIN2);
        printf("Vino tipo 3: "); scanf("%f", &VIN3);
        printf("Vino tipo 4: "); scanf("%f", &VIN4);

        T1 += VIN1;
        T2 += VIN2;
        T3 += VIN3;
        T4 += VIN4;

        if (I == 1) A1 = VIN1 + VIN2 + VIN3 + VIN4;
        if (I == 2) A2 = VIN1 + VIN2 + VIN3 + VIN4;
        if (I == 3) A3 = VIN1 + VIN2 + VIN3 + VIN4;
    }

    printf("\nProducción total por tipo:\n");
    printf("Tipo 1: %.2f\nTipo 2: %.2f\nTipo 3: %.2f\nTipo 4: %.2f\n", T1, T2, T3, T4);

    printf("\nProduccion total por 1a:\n");
    if (N >= 1) printf("Año 1: %.2f\n", A1);
    if (N >= 2) printf("Año 2: %.2f\n", A2);
    if (N >= 3) printf("Año 3: %.2f\n", A3);
}
