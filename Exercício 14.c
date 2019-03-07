#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50], cont, tamanho;
    printf("Digite o nome: ");
    gets(nome);
    tamanho=strlen(nome);
    for(cont=1; cont<=tamanho; cont++)
    {
        printf("%s\n", nome);
    }
    return 0;
}