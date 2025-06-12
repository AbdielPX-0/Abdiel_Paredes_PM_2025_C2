#include <stdio.h>
#include <math.h>

void main(void)
{
    float X, T, SEN = 0, DIF;
    int I = 1, S = 1, F, J;

    printf("Ingrese a X en radianes: ");
    scanf("%f", &X);

    do {
        F = 1;
        for (J = 1; J <= (2 * I - 1); J++)
            F *= J;

        T = S * pow(X, 2 * I - 1) / F;
        DIF = fabs(T);
        SEN += T;
        S *= -1;
        I++;
    } while (DIF > 0.001);

    printf("Seno aprox..: %.5f\n", SEN);
    printf("Terminos usados: %d\n", I - 1);
}
