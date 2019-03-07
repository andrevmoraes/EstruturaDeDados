#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont, maior, menor, quant;
    printf("Digite a quantidade de numeros que serao digitados: ");
    scanf("%i", &quant);
    cont=0;
    maior=0;
    menor=9999;
    do
    {
        cont=cont+1;
        printf("Digite o %io numero: ", cont);
        scanf("%i", &num);
        if (num >= maior)
            maior = num;
        if (num <= menor)
            menor = num;
    }
    while (cont < quant);
    printf("\nO maior numero e: %i", maior);
    printf("\nO menor numero e: %i", menor);
    printf("\n%i numeros foram digitados\n", cont);
    return 0;
}