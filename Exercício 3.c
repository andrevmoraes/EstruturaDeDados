#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, valor;
    cont = 0;
    valor = 0;
    do
    {
        cont = cont +1;
        printf("\nValor: %d", valor);
        valor = valor +2;
    }
    while (cont <= 100);
    return 0;
}