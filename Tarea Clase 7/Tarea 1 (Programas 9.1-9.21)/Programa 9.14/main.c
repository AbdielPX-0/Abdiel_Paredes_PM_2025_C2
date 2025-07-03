#include <stdio.h>
#include <ctype.h>
/* Letras minusculas y mayusculas.
El programa, al recibir como dato un archivo formado por cadenas de caracteres,
determina el numero de letras minusculas y mayusculas que hay en el archivo. */
void minymay(FILE *); /* Prototipo de funcion. */

void main(void)
{
    FILE *ar;
    if ((ar = fopen("arc5.txt", "r")) != NULL)
    {
        minymay(ar);
        fclose(ar);
    }
    else
        printf("No se pudo abrir el archivo");
}

void minymay(FILE *arc)
/* Esta funcion cuenta el numero de minusculas y mayusculas que hay en el
archivo arc. */
{
    int min = 0, may = 0;
    int p;  // usar int para fgetc para detectar EOF correctamente
    while ((p = fgetc(arc)) != EOF)
    {
        if (islower(p))
            min++;
        else if (isupper(p))
            may++;
    }
    printf("\nNumero de minusculas: %d", min);
    printf("\nNumero de mayusculas: %d\n", may);
}
