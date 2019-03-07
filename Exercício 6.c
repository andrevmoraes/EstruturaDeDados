#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, num, nums[9];
    cont = 0;
    do
    {
        cont=cont+1;
        printf("Digite: ", num);
        scanf("%d", &num);
        nums[cont]=num;
    }
    while (cont < 10);
    cont=0;
    do
    {
        cont=cont+1;
        printf("\nVoce digitou: %d", nums[cont]);
    }
    while (cont < 5);
    return 0;
}