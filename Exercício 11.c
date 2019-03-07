#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont, maior;
    cont=0;
    maior=0;
    do
    {
        cont=cont+1;
        printf("Digite o %io numero: ", cont);
        scanf("%i", &num);
        if (num > maior)
            maior = num;
    }
    while (cont < 5);
    printf("\nO maior numero e: %i\n\n", maior);
    return 0;
}