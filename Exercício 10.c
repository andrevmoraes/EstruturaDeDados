#include <stdio.h>
#include <stdlib.h>

int main()
{
    float min, CEL, max;
    printf("Digite o limite minimo para FAHRENHEIT: ");
    scanf("%f", &min);
    printf("Digite o limite maximo para FAHRENHEIT: ");
    scanf("%f", &max);
    printf("\nTABELA DE CONVERSAO\n\n***  CELSIUS  ***   ***FAHRENHEIT ***");
    do
    {
        CEL=(5*(min-32))/9;
        printf("\n*** %f ***   *** %f ***", CEL, min);
        min=min+1;
    }
    while (min <= max);
    printf("\n\n\n");
    system("pause");
    return 0;
}