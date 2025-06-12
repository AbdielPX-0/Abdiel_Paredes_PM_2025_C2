#include <stdio.h>

void main(void)
{
    int N1, N2, RES;
    printf("Ingrese dos numeros naturales: ");
    scanf("%d %d", &N1, &N2);

    while (N2 != 0)
    {
        RES = N1 % N2;
        N1 = N2;
        N2 = RES;
    }

    printf("MCD = %d\n", N1);
}
