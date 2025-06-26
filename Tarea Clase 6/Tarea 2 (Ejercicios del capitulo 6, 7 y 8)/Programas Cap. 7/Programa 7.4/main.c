#include <stdio.h>

void main(void)
{
    char *cad0;
    cad0 = "Argentina"; /* comillas normales */
    puts(cad0);
    cad0 = "Brasil";
    puts(cad0);

    char cad1[50] = ""; /* reserva memoria para lectura con gets */
    gets(cad1);
    puts(cad1);

    // char cad1[]; // esto se elimina porque no tiene tamaño

    char cad2[20] = "Mexico";
    puts(cad2);
    gets(cad2);
    puts(cad2);

    // cad2[10] = "Guatemala"; // se elimina porque es incorrecto
}
