/*Crie um algoritmo que receba o três notas de 2 semestres e informe a média:
- 1o semestre:
- 1a nota: 7
- 2a nota: 9
- 3a nota: 8
- Média: 8,0
- 2o semestre:
- 1a nota: 8
- 2a nota: 7
- 3a nota: 3
- Média: 6,0
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s, n;
    float notas[2][3], media[2], soma = 0;

    for (s = 0; s < 2; s++)
    {
        soma = 0 ;
        for (n = 0; n < 3; n++)
        {
            printf("Informe a %d nota do %d semestre:", n + 1, s + 1);
            scanf("%f", &notas[s][n]);
            soma += notas[s][n];
        }
        media[s] = soma / n;
        system("cls");
    }

    system("cls");

    for (s = 0; s < 2; s++)
    {
        printf("---------%d Semestre--------------- \n", s + 1);
        for (n = 0; n < 3; n++)
        {
            printf("%d Nota:%.1f . \n", n + 1, notas[s][n]);
            printf("---------------------------------------\n");
        }
        printf("Media :%.1f \n", media[s]);
    }

    system("pause");
    return 0;
}