#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, cont;
    cont=0;
    printf("Digite o numero: ");
    scanf("%i", &num);

    if (num > 1)
    {
        for (i = 1; i <= num; i++)
        {
            if (num % i == 0)
                cont++;
        }
        if (cont == 2)
           printf("%i e primo\n", num);
        else
            printf("%i NAO e primo\n", num);
    }
    else
    printf("%i NAO e primo\n", num);
    return 0;
}