#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, num, fat;
    do

    {
        fat = 1;
        cont = 0;
        cont=cont+1;
        printf("Digite o %io numero: ", cont);
        scanf("%i", &num);

        do
        {
            fat=num*fat;
            num=num-1;
        }
        while(num>1);
        printf("O fatorial e: %i\n\n", fat);

    }
    while (num>1);
    return 0;
}