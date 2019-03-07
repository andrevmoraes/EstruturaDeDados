#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    int tamanho;
    printf("Digite o nome: ");
    gets(nome);
    tamanho=strlen(nome);
   do
    {
        tamanho=tamanho-1;
        if (nome[tamanho] == 'A')
            nome[tamanho]='X';

        if (nome[tamanho] == 'E')
            nome[tamanho] = 'Y';

        if (nome[tamanho] == 'I')
            nome[tamanho] = 'W';

        if (nome[tamanho] == 'O')
            nome[tamanho] = 'K';

        if (nome[tamanho] == 'U')
            nome[tamanho] = 'Z';

        if (nome[tamanho] == 'a')
            nome[tamanho]='x';

        if (nome[tamanho] == 'e')
            nome[tamanho] = 'y';

        if (nome[tamanho] == 'i')
            nome[tamanho] = 'w';

        if (nome[tamanho] == 'o')
            nome[tamanho] = 'k';

        if (nome[tamanho] == 'u')
            nome[tamanho] = 'z';
    }
    while (tamanho != 0);
    printf("%s", nome);
    return 0;
}