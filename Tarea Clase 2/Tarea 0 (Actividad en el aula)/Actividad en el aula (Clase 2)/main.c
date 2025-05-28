#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad = 0;

//Hacer un programa que determine el rango de edad de una persona
// 1 - Recien nacido persona de menor a 1 ano
// 2 - Infante persona de edad entre 1 a 3 anos
// 3 - Nino persona de edad entre 3 a 12 anos
// 4 - Adolescente persona de edad entre 12-18 anos
// 5 - Mayor de edad persona de edad entre 18-38 anos
// 6 - Envejeciente persona de edad entre 38 a 68 anos
// 7 - Anciano persona mayor de 68 anos de edad
// el cero es falso lo que sea que no sea cero es verdadero

    printf("Clase de seleccion!\n");

    printf("ingrese su edad: ");
    scanf("%i", &edad);
    if(edad>= 0 && edad <= 120)
    {
        if (edad < 1)
        {
            printf ("usted es un recien nacido");
        }
        else if (edad>= 1 && edad < 3)
        {
            printf("usted es un infante");
        }
        else if (edad>=3 && edad <12)
        {
            printf ("Usted es un nino");
        }
        else if (edad>= 12 && edad<18)
        {
            printf ("Usted es un adolescente");
        }
        else if (edad>= 18 && edad<38)
        {
            printf("usted es mayor de edad");
        }
        else if (edad>= 38 && edad<68)
        {
            printf("usted es un envejeciente");
        }
        else if (edad>= 68)
        {
            printf ("usted es un anciano");
        }
//  Esta seccion es en caso de que se introduzca un valor invalido
    }
    else
    {
        if (edad<0)
        {
            printf("\nError Edad no real");
        }
        if(edad>120)
        {
            printf("\nError edad muy alta");
        }
    }
    return 0;
}
