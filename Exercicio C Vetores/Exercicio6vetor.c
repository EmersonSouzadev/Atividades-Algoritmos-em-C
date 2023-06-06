/*• Crie um algoritmo que preencha um vetor com 10 números reais, calcule e
mostre a quantidade de números negativos e a soma dos números positivos
desse vetor.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numR[10], somaP;
    int r, contN;

    for ( r = 0; r < 10; r++)
    {
        printf("Insira o %d numero :", r + 1);
        scanf("%f", &numR[r]);
        if (numR[r] > 0)
        {
            somaP += numR[r];
        }
        else if (numR[r] < 0)
        {
            contN++;
        }
    }
       
        printf("A soma dos Numeros positivos é: %.1f .\n", somaP);
        printf("---------------------------------------------------\n");
        printf("A quantidade de numeros negativos inseridos: %d.\n", contN);

    

    system("pause");
    return 0;
}