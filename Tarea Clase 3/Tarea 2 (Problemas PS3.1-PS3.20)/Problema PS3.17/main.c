#include <stdio.h>

void main(void)
{
    int N, I, J, ESP;
    printf("Ingrese un numero impar: ");
    scanf("%d", &N);

    for (I = 1; I <= N; I += 2) {
        ESP = (N - I) / 2;
        for (J = 1; J <= ESP; J++) printf("  ");
        for (J = 1; J <= I; J++) printf("%d ", J);
        printf("\n");
    }

    for (I = N - 2; I >= 1; I -= 2) {
        ESP = (N - I) / 2;
        for (J = 1; J <= ESP; J++) printf("  ");
        for (J = 1; J <= I; J++) printf("%d ", J);
        printf("\n");
    }
}
