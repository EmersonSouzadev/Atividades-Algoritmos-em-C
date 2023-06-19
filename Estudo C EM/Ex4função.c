/*• Fazer um programa em C que pergunta um valor em
metros e imprime o correspondente em centímetros.*/
#include  <stdio.h>
#include  <stdlib.h>

float centimetro(float metros, float valor ){
return metros * valor;

}
int main(){
float metros = 0.00,valor = 0.00;
valor = 100.000;
printf("Insira o tamanho em metros para saber o equivalente em centimetros: \n");
scanf("%f",&metros);

 printf("O tamanho em centimetros e : %.2f ", centimetro(metros, valor));


}