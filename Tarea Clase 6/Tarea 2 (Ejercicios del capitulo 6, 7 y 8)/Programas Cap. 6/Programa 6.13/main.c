#include <stdio.h>

/* Empresa textil.
El programa, al recibir un arreglo tridimensional que contiene informacion
sobre las ventas mensuales de tres departamentos en los ultimos ocho anios,
genera informacion estadistica valiosa para la empresa. */

const int MES = 12;
const int DEP = 3;
const int ANIO = 8;

void Lectura(float [MES][DEP][ANIO], int, int, int);
void Funcion1(float [MES][DEP][ANIO], int, int, int);
void Funcion2(float [MES][DEP][ANIO], int, int, int);
void Funcion3(float [MES][DEP][ANIO], int, int, int);

void main(void)
{
    float PRO[MES][DEP][ANIO];
    Lectura(PRO, MES, DEP, ANIO);
    Funcion1(PRO, MES, DEP, 2);      // Segundo anio
    Funcion2(PRO, MES, DEP, ANIO);   // Ultimo anio
    Funcion3(PRO, MES, DEP, ANIO);   // Mayor venta
}

void Lectura(float A[][DEP][ANIO], int F, int C, int P)
{
    int K, I, J;
    for (K = 0; K < P; K++)
        for (I = 0; I < F; I++)
            for (J = 0; J < C; J++) {
                printf("Anio: %d\tMes: %d\tDepartamento: %d: ", K + 1, I + 1, J + 1);
                scanf("%f", &A[I][J][K]);
            }
}

void Funcion1(float A[][DEP][ANIO], int F, int C, int P)
{
    int I, J;
    float SUM = 0.0;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++)
            SUM += A[I][J][P - 1];  // P-1 es el indice del segundo anio

    printf("\n\nVentas totales de la empresa en el segundo anio: %.2f", SUM);
}

void Funcion2(float A[][DEP][ANIO], int F, int C, int P)
{
    int I, J;
    float SUM1 = 0, SUM2 = 0, SUM3 = 0;

    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++) {
            switch (J) {
                case 0: SUM1 += A[I][J][P - 1]; break;
                case 1: SUM2 += A[I][J][P - 1]; break;
                case 2: SUM3 += A[I][J][P - 1]; break;
            }
        }

    printf("\n\nDepartamento con mayores ventas en el ultimo anio: ");
    if (SUM1 > SUM2 && SUM1 > SUM3)
        printf("Hilos\tVentas: %.2f", SUM1);
    else if (SUM2 > SUM3)
        printf("Lanas\tVentas: %.2f", SUM2);
    else
        printf("Licra\tVentas: %.2f", SUM3);
}

void Funcion3(float A[][DEP][ANIO], int F, int C, int P)
{
    int K, I, J, DE = 0, ME = 0, AN = 0;
    float VEN = -1.0;

    for (K = 0; K < P; K++)
        for (I = 0; I < F; I++)
            for (J = 0; J < C; J++)
                if (A[I][J][K] > VEN) {
                    VEN = A[I][J][K];
                    DE = J;
                    ME = I;
                    AN = K;
                }

    printf("\n\nDepartamento: %d\tMes: %d\tAnio: %d\tVentas: %.2f", DE + 1, ME + 1, AN + 1, VEN);
}
