/*Faça um programa em C que imprime uma tabela com a
tabuada de um número informado pelo usuário de 1 a 10.*/

#include <stdio.h>
#include <stdlib.h>

void tabuada(int numero)
{
    int i;
    printf("--------------Tabuada de %.0d-------------\n", numero);
    for (i = 1; i <= 10; i++)
    {

        printf("------------- %.0d X %.0d= %.0d------------ \n", numero, i, numero * i);
    }
}
int main()
{
    int numero;

    printf("Para saber a tabuada digite um numero :");
    scanf("%d", &numero);
    system("cls");
    tabuada(numero);

    system("pause");

    return 0;
}