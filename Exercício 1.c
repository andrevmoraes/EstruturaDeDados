#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, quad, cont;
    cont = 0;
    do
    {
        cont = cont +1;
        printf("\nDigite o numero: ");
        scanf("%d", &valor);
        quad=valor*valor;
        printf("O quadrado do valor digitado: %d\n", quad);
    }
    while (cont >= 5);
    return 0;
}