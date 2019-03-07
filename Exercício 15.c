#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    int i,tamanho;
    printf("Digite o nome: ");
    gets(nome);
    tamanho=strlen(nome);
    for (i=tamanho;i>=0;i--)
    {
        printf(" %c\n",nome[i]);
    }
    return 0;
}