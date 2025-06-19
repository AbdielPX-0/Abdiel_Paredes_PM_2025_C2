#include <stdio.h>
/* Búsqueda binaria. */
const int MAX = 100;

void Lectura(int[], int);       /* Prototipos de funciones. */
int Binaria(int *, int, int);

void main(void)
{
    int RES, ELE, TAM, VEC[MAX];

    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM > MAX || TAM < 1); /* Validación del tamaño. */

    Lectura(VEC, TAM);

    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);

    RES = Binaria(VEC, TAM, ELE); /* Se llama a la función de búsqueda. */

    if (RES)
        printf("\nEl elemento se encuentra en la posición: %d", RES);
    else
        printf("\nEl elemento no se encuentra en el arreglo");
}

void Lectura(int A[], int T)
/* La función Lectura se utiliza para leer un arreglo unidimensional. */
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

int Binaria(int A[], int T, int E)
/* Búsqueda binaria: devuelve la posición (base 1) si encuentra el elemento. */
{
    int IZQ = 0, CEN, DER = T - 1;

    while (IZQ <= DER)
    {
        CEN = (IZQ + DER) / 2;

        if (E == A[CEN])
            return CEN + 1; // base 1
        else if (E > A[CEN])
            IZQ = CEN + 1;
        else
            DER = CEN - 1;
    }

    return 0; // no se encontró
}
