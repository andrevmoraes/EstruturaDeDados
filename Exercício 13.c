#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[20], cont, maior, soma;
    num[0]=0;
    soma=0;
    maior=0;

    for(cont = 1; cont <= 20; cont++)
    {
        printf("Digite o %io numero: ", cont);
        scanf("%i", &num[cont]);
    }


    for(cont = 1; cont <= 20; cont++)
    {
        if (num[cont]*num[cont] < 225)
            soma = soma + num[cont];
    }
    printf("\nA soma dos valores cujos quadrados sao menores que 225 e: %i\n", soma);
    return 0;
}