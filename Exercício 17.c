#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade[21], cont, contador[4];
    float peso[21], soma[4], media[4];

    for(cont=0; cont<5; cont++)
    {
        soma[cont]=0;
        media[cont]=0;
        contador[cont]=0;
    }
    cont=0;
    do
    {
        cont=cont+1;
        printf("%i. Digite sua idade: ", cont);
        scanf("%i", &idade[cont]);
        printf("A idade digitada foi: %i\n\n", idade[cont]);

        printf("%i. Digite seu peso: ", cont);
        scanf("%f", &peso[cont]);
        printf("O peso digitado foi: %f\n\n", peso[cont]);

        printf("\n\n");
    }
    while (cont<20);

    for(cont = 1; cont <= 20; cont++)
    {
        if (idade[cont] >= 1 && idade[cont] <= 10)
        {
            soma[0]=soma[0]+peso[cont];
            contador[0]=contador[0]+1;
        }
        if (idade[cont] >= 11 && idade[cont] <= 20)
        {
            soma[1]=soma[1]+peso[cont];
            contador[1]=contador[1]+1;
        }
        if (idade[cont] >= 21 && idade[cont] <= 30)
        {
            soma[2]=soma[2]+peso[cont];
            contador[2]=contador[2]+1;
        }
        if (idade[cont] > 30)
        {
            soma[3]=soma[3]+peso[cont];
            contador[3]=contador[3]+1;
        }
    }
    printf("\n\n");
    if (contador[0]!=0)

    media[0]=soma[0]/contador[0];
    printf("\nDe 01 a 10 anos a media de pesos e: %f", media[0]);
    if (contador[1]!=0)
    {
    media[1]=soma[1]/contador[1];
    printf("\nDe 11 a 20 anos a media de pesos e: %f", media[1]);
    }
    if (contador[2]!=0)
    {
    media[2]=soma[2]/contador[2];
    printf("\nDe 21 a 30 anos a media de pesos e: %f", media[2]);
    }
    if (contador[3]!=0)
    {
    media[3]=soma[3]/contador[3];
    printf("\nMais de 30 anos a media de pesos e: %f", media[3]);
    }
    printf("\n");
    return 0;
}