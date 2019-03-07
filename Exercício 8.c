#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float cont, num, quad;
    cont = 0;
    do
    {
        cont=cont+1;
        printf("\nDigite: ", num);
        scanf("%f", &num);
        printf("Raiz: %f\n", sqrt(num));
    }
    while (cont < 15);
    cont=0;
    return 0;
}