#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, num;
    cont = 0;
    do
    {
        cont = cont + 1;
        printf("Digite o %io numero: ", cont);
        scanf("%i", &num);
        if (num>=100 && num<=200)
            printf("O numero digitado e: %i\n\n", num);
    }
    while (num>0);
    return 0;
}