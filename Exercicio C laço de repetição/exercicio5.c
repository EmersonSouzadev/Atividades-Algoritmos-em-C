/*6. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes,
coletando dados sobre o salário e número de filhos. A prefeitura
deseja saber:

a) total de famílias que responderam a pesquisa;
b) média do salário da população;
c) média do número de filhos;

O final da leitura de dados se dará com a entrada de um salário negativo.*/
#include   <stdio.h>
#include    <stdlib.h>

int main(){
float salario=0, mediaS=0, filhos=0, mediaF=0, somaS=0, somaF=0;
int familia =0;

while (salario >= 0)
{
    printf("------PESQUISA POPULACIONAL.-------\n");
    printf("-----------------------------------\n");
    printf("Qual o seu salario ?\n");
    scanf("%f",&salario);
    printf("-----------------------------------\n");
    if (salario > 0)
    
    {
        somaS += salario;
        printf("Quantos filhos voce tem ?\n");
        scanf("%f",&filhos);
        printf("-----------------------------------\n");
        familia++;
        somaF += filhos;
        
system("cls");
    }
  
   
    }

    mediaS = somaS / familia;
    mediaF = somaF / familia;
system("cls");


printf("-------------------RESUMO DA PESQUISA-----------------------\n");
printf("Total de familias que responderam a pesquisa:%.0d\n", familia);
printf("----------------------------------------------------------\n");
printf("Media do salario da populacao:%.2f\n",mediaS);
printf("----------------------------------------------------------\n");
printf("Media do numero de filhos:%.1f\n",mediaF);
printf("----------------------------------------------------------\n");



return 0;
}