/*5. Escreva um algoritmo que leia a média de um aluno. Caso seja
menor que 0 ou maior que 10, mostre a pergunta novamente.

Após receber a média, verifique se o aluno está aprovado ou
reprovado considerando que a média para aprovação é maior ou igual
a 7. Caso a média seja até 5, o aluno está em recuperação, caso seja
menor que 5, o aluno está reprovado.*/

#include   <stdio.h>
#include   <stdlib.h>

int main(){
float  media;

do
{printf("Insira a media do aluno :\n");
scanf("%f", &media);
} while (media < 0 || media > 10);

if (media >=7 )
{
    printf("Voce foi aprovado!");
} else if (media >=5 && media <7)
{
printf("Voce esta em recuperacao!");
}else {
    printf("Voce foi reprovado!");
}

return 0 ;

}
