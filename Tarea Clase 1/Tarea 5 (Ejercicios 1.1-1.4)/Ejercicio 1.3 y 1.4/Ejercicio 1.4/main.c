#include <stdio.h>

/* Superficie del triangulo.
El programa, al recibir como datos la base y la altura de un triangulo,
calcula su superficie.

BAS, ALT y SUP: variables de tipo real. */

void main (void)
{
float BAS, ALT, SUP;
printf("ingrese la base y la altura del triangulo: ");
scanf("%f %f", &BAS, &ALT);
SUP = BAS * ALT / 2;
printf ("\nla superficie del triangulo es: %5.2f", SUP);
}
