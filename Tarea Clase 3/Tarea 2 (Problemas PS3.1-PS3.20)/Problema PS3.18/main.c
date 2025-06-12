#include <stdio.h>

void main(void)
{
    int N, I, J, ESP;
    printf("Ingrese N: ");
    scanf("%d", &N);

    for (I = 1; I <= N; I++) {
        for (J = 1; J <= N - I + 1; J++) printf("%d ", J);
        for (ESP = 1; ESP <= 2 * (I - 1); ESP++) printf("  ");
        for (J = N - I + 1; J >= 1; J--) printf("%d ", J);
        printf("\n");
    }
}
