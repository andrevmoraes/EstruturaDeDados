#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int cont, num;
    float raiz;
    cont = 0;
    do
    {
        cont=cont+1;
        printf("Digite o %io numero: ", cont);
        scanf("%i", &num);
        if (num<0)
            cont=cont-1;
        else
        {
        raiz=sqrt(num);
        printf("A raiz quadrada e: %f\n\n", raiz);
        }
    }
    while (cont<10);
    return 0;
}