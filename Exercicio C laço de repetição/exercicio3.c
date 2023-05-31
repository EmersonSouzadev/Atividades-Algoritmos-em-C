/*4. Escrever um programa de computador que leia 5
números inteiros e, ao final, apresente a soma de
todos os números lidos.*/
#include   <stdio.h>
#include   <stdlib.h>

int main (){
int i, numero = 0, somaNumeros=0;
for (i = 0; i < 5; i++)
{
printf("Insira um numero :");
scanf("%d", &numero);
somaNumeros += numero;
}

printf("A soma dos numeros inseridos é : %d",somaNumeros);
return 0;
}
