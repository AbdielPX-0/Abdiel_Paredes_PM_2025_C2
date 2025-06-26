#include <stdio.h>
#include <string.h>
/* Funciones de la biblioteca string.h para el manejo de cadenas de caracteres. */
void main(void)
{
    char cad0[50] = "Hola México";
    char cad1[50], cad2[50], cad3[] = ", buenos días!!!";

    strcpy(cad1, cad0);
    /* La función strcpy copia la cadena cad0 a cad1. */
    printf("\nPrueba de la función strcpy. Se copia la cadena cad0 a cad1: %s\n", cad1);

    strcpy(cad1, cad3);
    printf("\nPrueba de la función strcpy. Se copia la cadena cad3 a cad1: %s\n", cad1);

    strcpy(cad1, "XX");
    printf("\nPrueba de la función strcpy. Se copia la cadena XX a cad1: %s\n", cad1);

    strncpy(cad2, cad0, 4);
    cad2[4] = '\0';
    /* Copia solo 4 caracteres de cad0 a cad2 y termina la cadena con '\0'. */
    printf("\nPrueba de la función strncpy. Se copian 4 caracteres de cad0 a cad2: %s\n", cad2);

    strncpy(cad2, cad3, 3);
    cad2[3] = '\0';
    printf("\nPrueba de la función strncpy. Se copian 3 caracteres de cad3 a cad2: %s\n", cad2);

    strcat(cad0, cad3);
    /* Se concatena cad3 al final de cad0. Asegúrate que cad0 tenga suficiente espacio. */
    printf("\nPrueba de la función strcat. Se incorpora la cadena cad3 a cad0: %s\n", cad0);

    strcat(cad1, " YY");
    printf("\nPrueba de la función strcat. Se incorpora la cadena YY a cad1: %s\n", cad1);

    strcat(cad2, " ");
    strncat(cad2, cad0, 4);
    printf("\nPrueba de la función strncat. Se incorporan 4 caracteres de cad0 a cad2: %s\n", cad2);

    char *ptr;

    ptr = strstr(cad0, "México");
    if (ptr != NULL)
        printf("\nPrueba de la función strstr. Se localiza la cadena México dentro de cad0: %s\n", ptr);
    else
        printf("\nNo se encontró la cadena México en cad0.\n");

    ptr = strstr(cad0, "Guatemala");
    if (ptr != NULL)
        printf("\nPrueba de la función strstr. Se localiza la cadena Guatemala dentro de cad0: %s\n", ptr);
    else
        printf("\nNo se encontró la cadena Guatemala en cad0.\n");
}
