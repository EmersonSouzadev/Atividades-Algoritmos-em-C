/*? Crie um algoritmo que receba o nome de três disciplinas, receba duas notas
para cada disciplina e mostre:

- Exemplo:
Nome da disciplina: Lógica de programação
- 1a nota: 8,0
- 2a nota: 7,0
- 3a nota: 3,0
Média: 6,0
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int s, n;
    float notas[3][2], media[2], soma = 0;
    char disciplina[3][150];

    for (s = 0; s < 3; s++)
    {
        fflush(stdin);
        printf("Qual a %dª disciplina deseja armazenar média?\n",s + 1);
       gets(disciplina[s]);

        fflush(stdin);
        soma = 0;
        for (n = 0; n < 2; n++)
        {

            printf("Informe a %d nota do %d semestre:", n + 1, s + 1);
            scanf("%f", &notas[s][n]);
            soma += notas[s][n];
        }
        media[s] = soma / n;
        system("cls");
    }

    system("cls");

    for (s = 0; s < 3; s++)
    {
        printf("-----------Disciplina:%s----------------------\n", disciplina[s]);

        printf("--------------------NOTAS E MEDIA-------------------- \n", s + 1);
        for (n = 0; n < 2; n++)
        {
            printf("%d Nota:%.1f . \n", n + 1, notas[s][n]);
            printf("---------------------------------------\n");
        }
        printf("Media :%.1f \n", media[s]);
    }

    system("pause");
    return 0;
}