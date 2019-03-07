#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resto, num, cont;
    cont = 0;
    do
    {
        cont = cont +1;
        resto = cont%5;
        if (resto==0)
            printf("\n%d", cont);
    }
    while (cont <= 500);
    return 0;
}