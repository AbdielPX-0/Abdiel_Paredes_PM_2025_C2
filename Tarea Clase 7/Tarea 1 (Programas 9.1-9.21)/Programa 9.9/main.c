#include <stdio.h>

/* Alumnos.
El programa lee bloques —variables de tipo estructura alumno— de un archivo
de acceso directo. */

typedef struct { /* Declaracion de la estructura alumno. */
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void lee(FILE *); /* Prototipo de funcion. */

void main(void)
{
    FILE *ar;
    if ((ar = fopen("ad1.dat", "r")) != NULL)
        lee(ar);
    else
        printf("\nEl archivo no se puede abrir\n");
    fclose(ar);
}

void lee(FILE *ap)
/* Esta funcion se utiliza para leer bloques de un archivo de acceso directo. */
{
    alumno alu;
    /* Primera lectura antes del ciclo */
    if (fread(&alu, sizeof(alumno), 1, ap) == 1)
    {
        do
        {
            printf("\nMatricula: %d", alu.matricula);
            printf("\tCarrera: %d", alu.carrera);
            printf("\tPromedio: %.2f\t", alu.promedio);
            puts(alu.nombre);
        }
        while (fread(&alu, sizeof(alumno), 1, ap) == 1);
    }
}
