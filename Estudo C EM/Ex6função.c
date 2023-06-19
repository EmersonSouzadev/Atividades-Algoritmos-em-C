/*• Escreva um programa que permita ler 3 notas de um aluno e informe por meio de
funções: • A média; • Com base na média, se o aluno está aprovado ou reprovado.
 • Critério para aprovação: média 7,0.*/

#include <stdio.h>
#include <stdlib.h>


float med(float somaN)
{
    return somaN /3;
}
void resultado(float media)
{
    if (media >= 7)
    {
        printf("Aprovado!");
    }
}
int main()
{
     int i;
    float notas[3], somaNotas, media;

    for (i = 1; i <= 3; i++)
    {

        do
        {
            printf("-------Insira a %.0d nota:--------- \n", i);
            scanf("%f",&notas[i]);

        } while (notas[i] < 0 || notas[i] > 10);

        somaNotas += notas[i];
    }
    media+= med(somaNotas);
    printf("A media e : %.2f. \n", media);
    
    resultado(media);

    system("pause");
    return 0;
}