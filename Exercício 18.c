#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont;
    cont=0;
    do
    {
        printf("Digite o numero: ");
        scanf("%i", &num);
        if (num>=0)
            cont=cont+1;
    }
    while (num>=0);
    printf("Foram digitados %i numeros positivos.", cont);
    return 0;
}