#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma, cont;
    cont = 0;
    soma = 0;
    do
    {
        cont = cont +1;
        printf("\n%d", cont);
        soma = soma + cont;
    }
    while (cont < 100);
    printf("\n\nSoma: %d", soma);
    return 0;
}