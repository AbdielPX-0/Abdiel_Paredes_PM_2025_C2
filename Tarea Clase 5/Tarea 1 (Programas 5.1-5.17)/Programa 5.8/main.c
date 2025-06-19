#include <stdio.h>

/* Primos.
El programa almacena en un arreglo unidimensional los primeros 100 números primos. */

const int TAM = 100;
void Imprime(int[], int); /* Prototipos de funciones. */
void Primo(int, int *);

void main(void)
{
    int P[TAM];
    P[0] = 2; // Primer número primo
    int FLA, J = 1, PRI = 3;

    while (J < TAM) // Solo hasta 99 porque P[0] ya tiene un primo
    {
        FLA = 1;
        Primo(PRI, &FLA);
        if (FLA)
        {
            P[J] = PRI;
            J++;
        }
        PRI += 2; // Solo números impares
    }

    Imprime(P, TAM);
}

void Primo(int A, int *B)
/* Esta función determina si A es primo, en cuyo caso *B se mantiene en 1.
   Si no lo es, *B se pone en 0. */
{
    int DI = 3;
    while (*B && DI <= A / 2)
    {
        if ((A % DI) == 0)
            *B = 0;
        DI++;
    }
}

void Imprime(int Primos[], int T)
/* Esta función imprime el arreglo unidimensional de números primos. */
{
    int I;
    for (I = 0; I < T; I++)
        printf("\nPrimos[%d]: %d", I, Primos[I]);
}
