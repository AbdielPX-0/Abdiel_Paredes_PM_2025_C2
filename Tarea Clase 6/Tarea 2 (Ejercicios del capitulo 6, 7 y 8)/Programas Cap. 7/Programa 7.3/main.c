#include <stdio.h>

/* Funciones para el manejo de cadenas de caracteres de la biblioteca stdio.h */
void main(void)
{
    char *cad0 = "Buenos dias"; // Cadena constante (apuntador)
    char cad1[20] = "Hola";     // Cadena con espacio reservado
    char cad2[] = "Mexico";     // Cadena sin tamaño definido
    char cad3[] = {'B','i','e','n','v','e','n','i','d','o','\0'}; // Inicializacion caracter por caracter

    char cad4[20], cad5[20], cad6[20];

    printf("\nLa cadena cad0 es: ");
    puts(cad0);

    printf("\nLa cadena cad1 es: ");
    printf("%s\n", cad1);

    printf("\nLa cadena cad2 es: ");
    puts(cad2);

    printf("\nLa cadena cad3 es: ");
    puts(cad3);

    printf("\nIngrese una linea de texto —se lee con gets—: \n");
    gets(cad4);  // ⚠️ gets esta obsoleta, mejor usar fgets en programas reales
    printf("\nLa cadena cad4 es: ");
    puts(cad4);

    fflush(stdin);
    printf("\nIngrese una linea de texto —se lee con scanf—: \n");
    scanf("%s", cad5); // Solo lee hasta el primer espacio
    printf("\nLa cadena cad5 es: ");
    printf("%s\n", cad5);

    fflush(stdin);
    char p;
    int i = 0;

    printf("\nIngrese una linea de texto —se lee caracter por caracter con getchar—: \n");
    while ((p = getchar()) != '\n' && i < 19)
        cad6[i++] = p;
    cad6[i] = '\0';

    printf("\nLa cadena cad6 es: ");
    puts(cad6);
}
