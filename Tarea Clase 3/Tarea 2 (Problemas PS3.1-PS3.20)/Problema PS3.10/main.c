#include <stdio.h>

void main (void)
{
    float L1, L2, L3, L4, L5, L6, REC = 0, MON;
    int CLA, CAN;
    int B1 = 0, B2 = 0, B3 = 0, B4 = 0, B5 = 0, B6 = 0;

    printf("Ingrese los precios de las 6 localidades: \n");
    scanf("%f %f %f %f %f %f", &L1, &L2, &L3, &L4, &L5, &L6);

printf("Ingrese el tipo de localidad y cantidad vendida: ");
scanf("%d %d", &CLA, &CAN);

while (CLA != 0 && CAN != 0)
{
    switch (CLA)
{
case 1:
    MON = L1 * CAN;
    B1 += CAN;
    break;

    case 2:
    MON = L2 * CAN;
    B2 += CAN;
    break;

    case 3:
    MON = L3 * CAN;
    B3 += CAN;
    break;


    case 4:
    MON = L4 * CAN;
    B4 += CAN;
    break;

    case 5:
    MON = L5 * CAN;
    B5 += CAN;
    break;


    case 6:
    MON = L6 * CAN;
    B6 += CAN;
    break;

    default:
        MON = 0;
        printf("Tipo de localidad invalido. \n");
        }

        REC += MON;
        printf("Monto de la venta: %5.2f\n", MON);

        printf("Ingrese el tipo de localidad y cantidad vendida: \n");
        scanf("%d %d", &CLA, &CAN);

}
printf("Boletos vendidos por localidad:\n");
printf("L1: %d\nL2: %d\nL3: %d\nL4: %d\nL5: %d\nL6: %d\n", B1, B2, B3, B4, B5, B6);
printf("Recaudacion total: %7.2f\n", REC);
}
