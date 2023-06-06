#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float numeros[5], maiorN = 0.0, menorN = 99999999.0;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Insira o %dº número: ", i + 1);
        scanf("%f", &numeros[i]);

        if (numeros[i] > maiorN)
            maiorN = numeros[i];

        if (numeros[i] < menorN)
            menorN = numeros[i];
    }

    system("cls");

    printf("----------------- NUMEROS INSERIDOS -----------------\n");
    for (i = 0; i < 5; i++)
    {
        printf("%dº número: %.2f\n", i + 1, numeros[i]);
    }
    printf("---------------------------------------------------\n");

    printf("O maior número é: %.2f\n", maiorN);
    printf("O menor número é: %.2f\n", menorN);

    system("pause");
    return 0;
}
