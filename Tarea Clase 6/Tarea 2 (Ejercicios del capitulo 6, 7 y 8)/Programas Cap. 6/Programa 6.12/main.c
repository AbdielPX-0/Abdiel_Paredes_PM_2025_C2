#include <stdio.h>

/* Lluvias.
El programa, al recibir como dato un arreglo tridimensional que contiene
informacion sobre lluvias, genera informacion estadistica. */

const int PRO = 24;
const int MES = 12;
const int ANIO = 10;

void Lectura(float [PRO][MES][ANIO], int, int, int);
void Funcion1(float [PRO][MES][ANIO], int, int, int);
void Funcion2(float [PRO][MES][ANIO], int, int, int);
void Funcion3(float [PRO][MES][ANIO], int, int, int);

void main(void)
{
    float LLU[PRO][MES][ANIO];
    Lectura(LLU, PRO, MES, ANIO);
    Funcion1(LLU, PRO, MES, ANIO);
    Funcion2(LLU, PRO, MES, ANIO);
    Funcion3(LLU, 18, MES, 5);
}

void Lectura(float A[][MES][ANIO], int F, int C, int P)
/* Esta funcion se utiliza para leer un arreglo tridimensional de tipo real. */
{
    int K, I, J;
    for (K = 0; K < P; K++)
        for (I = 0; I < F; I++)
            for (J = 0; J < C; J++) {
                printf("Anio: %d\tProvincia: %d\tMes: %d: ", K + 1, I + 1, J + 1);
                scanf("%f", &A[I][J][K]);
            }
}

void Funcion1(float A[][MES][ANIO], int F, int C, int P)
/* Localiza la provincia con mayor registro de lluvias en promedio. */
{
    int I, K, J, EMAY = -1;
    float ELLU = -1.0, SUM;

    for (I = 0; I < F; I++) {
        SUM = 0.0;
        for (K = 0; K < P; K++)
            for (J = 0; J < C; J++)
                SUM += A[I][J][K];

        SUM /= (P * C);

        if (SUM > ELLU) {
            ELLU = SUM;
            EMAY = I;
        }
    }

    printf("\n\nProvincia con mayor registro de lluvias: %d", EMAY + 1);
    printf("\nRegistro promedio: %.2f", ELLU);
}

void Funcion2(float A[][MES][ANIO], int F, int C, int P)
/* Localiza la provincia con menor registro de lluvias en el ultimo anio. */
{
    int I, J, EMEN = -1;
    float ELLU = 1e9, SUM;

    for (I = 0; I < F; I++) {
        SUM = 0.0;
        for (J = 0; J < C; J++)
            SUM += A[I][J][P - 1];

        SUM /= C;

        if (SUM < ELLU) {
            ELLU = SUM;
            EMEN = I;
        }
    }

    printf("\n\nProvincia con menor registro anual en el ultimo anio: %d", EMEN + 1);
    printf("\nRegistro anual: %.2f", ELLU);
}

void Funcion3(float A[][MES][ANIO], int F, int C, int P)
/* Localiza el mes con mayor registro de lluvias en una provincia y anio dado. */
{
    int J, EMES = -1;
    float ELLU = -1.0;

    for (J = 0; J < C; J++) {
        if (A[F - 1][J][P - 1] > ELLU) {
            ELLU = A[F - 1][J][P - 1];
            EMES = J;
        }
    }

    printf("\n\nMes con mayor registro en provincia %d, anio %d: %d", F, P, EMES + 1);
    printf("\nLluvias: %.2f", ELLU);
}
