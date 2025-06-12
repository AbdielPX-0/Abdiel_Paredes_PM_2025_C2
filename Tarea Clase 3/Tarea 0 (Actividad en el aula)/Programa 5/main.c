#include <stdio.h>
#include <stdlib.h>

#define MENU_NINGUNO 0
#define MENU_SALIR 1
#define MENU_SUMAR 2
#define MENU_DIVIDIR 3

int main()
{
    float n1 = 0.0, n2 = 0.0, result = 0.0;
    int menu = MENU_NINGUNO;

    do
    {
        printf("\n1 - Salir \n2 - Sumar \n3 - Dividir\n");
        printf("Seleccione una opción: ");
        scanf("%i", &menu);

        if(menu == MENU_SUMAR)
        {
            printf("\nPrimer sumando: ");
            scanf("%f", &n1);
            printf("Segundo sumando: ");
            scanf("%f", &n2);
            result = n1 + n2;
            printf("La suma de %.2f y %.2f es: %.2f\n", n1, n2, result);
        }
        else if (menu == MENU_DIVIDIR)
        {
            printf("\nDividendo: ");
            scanf("%f", &n1);
            printf("Divisor: ");
            scanf("%f", &n2);

            if(n2 != 0.0)
            {
                result = n1 / n2;
                printf("La división de %.2f entre %.2f es: %.2f\n", n1, n2, result);
            }
            else
            {
                printf("Error: división por cero no permitida.\n");
            }
        }
        else if (menu != MENU_SALIR)
        {
            printf("Opción no válida. Por favor seleccione entre 1 y 3.\n");
        }

    } while (menu != MENU_SALIR);

    return 0;
}
