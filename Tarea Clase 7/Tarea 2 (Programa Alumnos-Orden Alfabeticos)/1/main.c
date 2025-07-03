#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define FNAME "alumnos.dat"

typedef struct {
    char nombre[50];
    float prom;
} Alumno;

int lee(Alumno aux[]);
void guarda(Alumno aux[], int n);
void muestra(Alumno aux[], int n);
void ordenaNombre(Alumno aux[], int n);
void ordenaProm(Alumno aux[], int n);

int main() {
    Alumno v[MAX];
    int n = lee(v), op;

    do {
        printf("\n1) Agregar  2) Ver lista  3) Ordenar por nombre  4) Ordenar por promedio  0) Salir\n");
        printf("-> ");
        scanf("%d", &op);
        getchar();

        switch(op) {
            case 1:
                if (n == MAX) {
                    puts("Limite de informacion alcanzado");
                } else {
                    printf("Nombre: ");
                    fgets(v[n].nombre, 50, stdin);
                    v[n].nombre[strcspn(v[n].nombre, "\n")] = 0;
                    printf("Promedio: ");
                    scanf("%f", &v[n].prom);
                    getchar();
                    n++;
                    guarda(v, n);
                    puts("Guardado.");
                }
                break;

            case 2:
                if (!n) puts("Nada que mostrar.");
                else muestra(v, n);
                break;

            case 3:
                ordenaNombre(v, n);
                puts("Ordené por nombre.");
                muestra(v, n);
                guarda(v, n);
                break;

            case 4:
                ordenaProm(v, n);
                puts("Ordené por promedio.");
                muestra(v, n);
                guarda(v, n);
                break;

            case 0:
                puts("bye bye :D");
                break;

            default:
                puts("Opción inválida.");
        }
    } while(op);

    return 0;
}

int lee(Alumno aux[]) {
    FILE *f = fopen(FNAME, "rb");
    int i = 0;
    if (f) {
        while (i < MAX && fread(&aux[i], sizeof *aux, 1, f) == 1)
            i++;
        fclose(f);
    }
    return i;
}

void guarda(Alumno aux[], int n) {
    FILE *f = fopen(FNAME, "wb");
    if (!f) {
        perror("Error");
        return;
    }
    fwrite(aux, sizeof *aux, n, f);
    fclose(f);
}

void muestra(Alumno aux[], int n) {
    puts("\n--- Alumnos ---");
    for (int i = 0; i < n; i++)
        printf("%2d) %-30s %.2f\n", i+1, aux[i].nombre, aux[i].prom);
}

void ordenaNombre(Alumno aux[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (strcmp(aux[j].nombre, aux[j+1].nombre) > 0) {
                Alumno t = aux[j];
                aux[j] = aux[j+1];
                aux[j+1] = t;
            }
        }
    }
}

void ordenaProm(Alumno aux[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (aux[j].prom < aux[j+1].prom) {
                Alumno t = aux[j];
                aux[j] = aux[j+1];
                aux[j+1] = t;
            }
        }
    }
}
