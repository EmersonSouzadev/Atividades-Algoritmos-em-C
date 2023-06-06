/*Crie um programa que leia 6 números, armazenando em um
vetor e informe quantos são pares e quantos são ímpares.

Mostre os números informados pelo usuário.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contI= 0, contP= 0, i, num[6];

    for (i = 0; i < 6; i++)
    {
        printf("Insira o %d numero : ", i + 1 );
        
        scanf("%d", &num[i]);
        
        if (num[i] % 2 == 0 )
        {

            contP++;
        }

        else
        {

            contI++;
        }
    }

    printf("%d numeros sao pares!\n", contP);
    printf("%d numeros sao impares!\n", contI);

    system("pause");
    return 0;
}