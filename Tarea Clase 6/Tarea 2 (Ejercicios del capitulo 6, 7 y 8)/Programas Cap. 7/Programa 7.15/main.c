#include <stdio.h>
#include <ctype.h>
/* Decodifica.
El programa decodifica una cadena de caracteres compuesta por numeros y letras. */

void interpreta(char *); /* Prototipo de funcion. */

void main(void)
{
    char cad[50];
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);
    interpreta(cad);
}

void interpreta(char *cadena)
/* Esta funcion se utiliza para decodificar la cadena de caracteres. */
{
    int i = 0, j, k;
    while (cadena[i] != '\0')
    {
        if (isalpha(cadena[i])) /* Verifica si el caracter es una letra */
        {
            k = cadena[i - 1] - '0';
            /* Se convierte el caracter numerico anterior en su valor entero */
            for (j = 0; j < k; j++)
                putchar(cadena[i]);
        }
        i++;
    }
}
