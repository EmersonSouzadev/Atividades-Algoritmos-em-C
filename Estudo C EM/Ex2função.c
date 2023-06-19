/*• Crie uma função em linguagem C que receba 2 números e
retorne o menor valor.*/

#include <stdio.h>
#include <stdlib.h>

void menorN(int numero1, int numero2)
{
    if (numero1 < numero2)
    {
        printf("%.0d e o menor numero!", numero1);
    }
    else
    {
        printf("%.0d e o menor numero!", numero2);
    }
}

int main()
{
    int numero1, numero2;

    printf("Digite um numero :");
    scanf("%d", &numero1);

    printf("Digite outro numero:");
    scanf("%d", &numero2);
    
    menorN(numero1, numero2);

    return 0;
}