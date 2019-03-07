#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cont, pol;
    cont = 0;
    printf("\nTABELA DE CONVERSAO\n\n*** POLEGADAS ***   ***CENTIMETROS***");
    do
    {
        cont=cont+1;
        pol=cont*2.54;
        printf("\n*** %f ***   *** %f ***", cont, pol);
    }
    while (cont < 20);
    printf("\n\n\n");
    return 0;
}