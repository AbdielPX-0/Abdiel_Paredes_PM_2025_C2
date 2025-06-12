#include <stdio.h>

int main()
{
    int IND = 0;
    float SBR = 0.0, TOT = 0.0;

    for(IND = 1, TOT = 0.0; IND <= 5; IND++)
    {
        printf("Ingrese el salario del profesor %d: \t", IND);
        scanf("%f", &SBR);

        float IMP = SBR * 0.12;
        float NET = SBR - IMP;
        TOT = TOT + SBR;

        printf("Sueldo del profesor %d: %.2f\n", IND, NET);
    }

    printf("\nTotal a pagar es: %.2f", TOT);
    printf("\nTotal a pagar a profesores: %.2f", TOT - (TOT * 0.12));
    printf("\nTotal a pagar en impuestos: %.2f", TOT * 0.12);

    return 0;
}

