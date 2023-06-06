/*Crie um programa que leia 4 notas, armazenando em um
vetor e calcule a média aritmética.
Verifique a situação do aluno considerando:
- Média maior ou igual a 7: Aprovado.
- Média maior ou igual a 5: Recuperação.
- Média menor que 5: Reprovado.
Mostre as 4 notas informadas pelo usuário e informe a média.*/

#include   <stdio.h>
#include   <stdlib.h>
#include    <locale.h>
int main (){
setlocale(LC_ALL,"");

float notas[4], media, somaN;
int i ;

for (i = 0; i < 4; i++)
{
  printf("Insira a %d  nota:", i + 1);
  scanf("%f",&notas[i]);
somaN += notas[i];
}

media = somaN / i;

system("cls");

printf("------------------RESULTADO FINAL------------------\n");
for (i = 0; i < 4; i++)
{
  printf("%d  Nota:%.2f \n", i+1, notas[i]);
printf("---------------------------------------------------\n");
  
}

printf("A Media e :%.2f \n",media);

if (media > 7)
{

printf("Voce foi aprovado!\n");

} else if (media >=5 && media < 7){
    printf("Voce esta em recuperacao!\n");
} else{
    printf("Voce foi reprovado!\n");
}



system("pause");
    return 0;
}