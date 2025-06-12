#include <stdio.h>
#include <math.h>

void main(void)
{
    int T, P, R;
    float EXP;

    for (T = 1; T <= 10; T++)
    for (P = 1; P <= 10; P++)
    for (R = 1; R <= 10; R++)
    {
    EXP = 7 * pow(T, 4) - 6 * pow(P, 3) + 12 * pow(R, 5);
    if (EXP < 5850)
    printf("T=%d P=%d R=%d -> %.2f\n", T, P, R, EXP);
}
}
