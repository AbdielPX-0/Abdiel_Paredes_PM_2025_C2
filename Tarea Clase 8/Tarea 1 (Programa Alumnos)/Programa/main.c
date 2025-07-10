#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NOMBRE_MAX 40

struct Alumno
{
    char *nombre;
    int edad;
    int matricula;
    struct Alumno *sig;
};

void guardar(struct Alumno *inicio)
{
    FILE *f = fopen("datos.txt", "w");
    if (f == NULL)
    {
        printf("Error al abrir el archivo.\n");
        return;
    }

    while (inicio != NULL)
    {
        fprintf(f, "%s %d %d\n", inicio->nombre, inicio->edad, inicio->matricula);
        inicio = inicio->sig;
    }

    fclose(f);
}

struct Alumno* cargar()
{
    FILE *f = fopen("datos.txt", "r");
    if (f == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        return NULL;
    }

    struct Alumno *primero = NULL, *ultimo = NULL, *nuevo;
    char nom[NOMBRE_MAX];
    int edad, mat;

    while (fscanf(f, "%s %d %d", nom, &edad, &mat) == 3)
    {
        nuevo = malloc(sizeof(struct Alumno));
        nuevo->nombre = malloc(strlen(nom) + 1);
        strcpy(nuevo->nombre, nom);
        nuevo->edad = edad;
        nuevo->matricula = mat;
        nuevo->sig = NULL;

        if (primero == NULL)
        {
            primero = nuevo;
            ultimo = nuevo;
        }
        else
        {
            ultimo->sig = nuevo;
            ultimo = nuevo;
        }
    }

    fclose(f);
    return primero;
}

void mostrar(struct Alumno *inicio)
{
    while (inicio != NULL)
    {
        printf("Nombre: %s | Edad: %d | Matricula: %d\n", inicio->nombre, inicio->edad, inicio->matricula);
        inicio = inicio->sig;
    }
}

void liberar(struct Alumno *inicio)
{
    struct Alumno *tmp;
    while (inicio != NULL)
    {
        tmp = inicio;
        inicio = inicio->sig;
        free(tmp->nombre);
        free(tmp);
    }
}

int main()
{
    int n;
    struct Alumno *inicio = NULL, *nuevo, *ultimo = NULL;
    char nombreTemp[NOMBRE_MAX];

    printf("Cantidad de alumnos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        nuevo = malloc(sizeof(struct Alumno));

        printf("Nombre: ");
        scanf("%s", nombreTemp);
        nuevo->nombre = malloc(strlen(nombreTemp) + 1);
        strcpy(nuevo->nombre, nombreTemp);

        printf("Edad: ");
        scanf("%d", &nuevo->edad);

        printf("Matricula: ");
        scanf("%d", &nuevo->matricula);

        nuevo->sig = NULL;

        if (inicio == NULL)
        {
            inicio = nuevo;
            ultimo = nuevo;
        }
        else
        {
            ultimo->sig = nuevo;
            ultimo = nuevo;
        }
    }

    guardar(inicio);
    liberar(inicio);

    printf("\nDatos leidos desde el archivo:\n");
    struct Alumno *copia = cargar();
    mostrar(copia);
    liberar(copia);

    return 0;
}
