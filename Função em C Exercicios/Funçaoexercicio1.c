#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int calcularSoma(int a, int b){
return a + b;
}
int main(){
setlocale(LC_ALL,"");
int numero1, numero2, soma;


printf("Insira um numero: \n");
scanf("%d",&numero1);

printf("Insira um numero:\n");
scanf("%d",&numero2);
soma = calcularSoma(numero1,numero2);

printf("a soma é : %d \n",soma);
}