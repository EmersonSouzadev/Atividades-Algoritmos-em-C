/*Crie um algoritmo que leia o nome e a idade de 5 pessoas,
armazenando em vetores.

- Liste o nome e a idade de cada pessoa.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, idade[5];
    char nome[5][100];

    for (i = 0; i < 5; i++)
    {
        printf("Qual o seu nome ?\n");
        gets(nome[i]);

        printf(" Qual a sua idade ?\n");
        scanf("%d", &idade[i]);
        system("cls");
        fflush(stdin);
    }

    system("cls");
    printf("-----------------DADOS COLETADOS-------------------------------\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d : %s , %.0d anos.\n", i + 1, nome[i], idade[i]);
        printf("-----------------------------------------------------------\n");
    }

    system("pause");
    return 0;
}