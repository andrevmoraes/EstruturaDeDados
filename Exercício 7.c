#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, num, quad;
    cont = 0;
    do
    {
        cont=cont+1;
        printf("\nDigite: ", num);
        scanf("%d", &num);
        quad = num*num;
        printf("Quadrado: %d\n", quad);
    }
    while (cont < 10);
    cont=0;
    return 0;
}