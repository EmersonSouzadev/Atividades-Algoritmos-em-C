/*1. Escreva um algoritmo que pergunte ao usuário se deseja inserir
mais uma nota, se a resposta do usuário for “NÃO”, o programa
fará a média aritmética das notas informadas e mostrará a média
aritmética para o usuário.

Obs.: Use um contador dentro do laço de repetição para contar a
quantidade e iterações (loops).*/

#include  <stdio.h>
#include  <stdlib.h>

int main(){

float nota=0, media=0, somaNotas=0;
int cont = 0 ;
char resposta;

do{
    printf("insira uma nota :\n");
    scanf("%f",&nota);

if (nota >=0 && nota <= 10)
{
    somaNotas+= nota ;
    cont++;

}
 
 printf("Deseja Adicionar outra nota S/N ?\n");
scanf("%c", &resposta);  





} while(resposta != 'N' && resposta != 'n');


media = somaNotas / cont ;

system("cls");

printf("A Media das notas e : %.2f \n.", media);


return 0;


}
