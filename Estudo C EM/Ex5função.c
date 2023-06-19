/*• Fazer um programa em C que lê o preço de um produto e inflaciona esse
preço em 10% se ele for menor que 100 e em 20% se ele for maior ou
igual a 100.*/

#include <stdio.h>
#include <stdlib.h>

float valorFinal(float valor)
{
    if (valor < 100)
    {
     return   valor += valor - (valor * 90 / 100);
    }
     else if (valor >= 100)
    {
       return valor += valor - (valor * 80 / 100);
    }
}

int main()
{
    float valor, inflacionado;

    printf("Insira o valor do produto:");
    scanf("%f", &valor);

inflacionado = valorFinal(valor);

printf("O valor total final é :%.2f.",inflacionado);



    return 0;
}