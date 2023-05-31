/*8. Faça um algoritmo que leia uma quantidade não
determinada de números positivos. Calcule:
a) quantidade de números pares e ímpares;
b) média de valores pares
O número que encerrará a leitura será zero.*/

#include    <stdio.h>
#include    <stdlib.h>

int main(){
float mediaP=0, somaP=0;
int contI=0, contP=0, numero=0;
do
{
    printf("Insira um numero:");
    scanf("%d",&numero);

    if (numero % 2 ==0 && numero > 0)
    {
    contP++;
    somaP += numero;
    } else if (numero % 2 != 0){
        contI++;
    }
   

    } while (numero != 0 );
mediaP = somaP / contP;


printf("--------------RESUMO FINAL-----------------\n");
printf("%.0d numeros sao pares:\n",contP);
printf("-------------------------------------------\n");
printf("%.d  numerossao impares:\n",contI);
printf("-------------------------------------------\n");
printf("A media dos valores pares e:%.2f \n", mediaP);
printf("-------------------------------------------\n");


    return 0;
}