/*Crie um programa que leia 3 notas, armazenando em um
vetor e calcule a média aritmética.
Mostre as 3 notas informadas pelo usuário e informe a média.*/
#include   <stdio.h>
#include   <stdlib.h>
#include    <locale.h>
int main (){
setlocale(LC_ALL,"");

float notas[3], media, somaN;
int i ;

for (i = 0; i < 3; i++)
{
  printf("Insira a %d  nota:", i + 1);
  scanf("%f",&notas[i]);
somaN += notas[i];
}

media = somaN / i;

system("cls");

printf("------------------RESULTADO FINAL------------------\n");
for (i = 0; i < 3; i++)
{
  printf("%d  Nota:%.2f \n", i+1, notas[i]);
printf("---------------------------------------------------\n");
  
}
printf("A Media e :%.2f \n",media);

system("pause");
    return 0;
}