#include <stdio.h>
/* Apuntadores y arreglos */
void main(void)
{
    int V1[4] = {2, 3, 4, 7}, V2[4] = {6};
    int *AX, *AY;

    AX = &V1[3];       // AX apunta a V1[3] = 7
    AY = &V2[2];       // AY apunta a V2[2] = 0

    V1[V2[0] - V1[2]] = *AY;  // V2[0] = 6, V1[2] = 4, → índice = 2
    // V1[2] = *AY = 0

    *AY = *AX - V1[0]; // *AY = 7 - 2 = 5 → V2[2] = 5

    printf("\nV1[0]=%d V1[1]=%d V1[2]=%d V1[3]=%d \tV2[0]=%d V2[1]=%d V2[2]=%d V2[3]=%d",
           V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);

    V2[1] = ++*AX;     // *AX era 7, ahora se incrementa a 8 → V1[3] = 8, V2[1] = 8
    V2[3] = (*AY)++;   // *AY era 5, se usa 5 en V2[3], luego se incrementa a 6
    *AX += 2;          // *AX = 8 + 2 = 10 → V1[3] = 10

    printf("\nV1[0]=%d V1[1]=%d V1[2]=%d V1[3]=%d \tV2[0]=%d V2[1]=%d V2[2]=%d V2[3]=%d",
           V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);
}
