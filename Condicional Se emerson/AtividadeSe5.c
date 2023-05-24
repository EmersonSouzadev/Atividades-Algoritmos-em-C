/*5. Elabore um algoritmo para receber dois inteiros como entrada do teclado e escreva na tela: 
A média, a soma, o produto, o menor valor e o maior valor. 
Além disso, verifique se os números informados pelo usuário são iguais. 
Usando uma linha para cada resultado.*/

#include  <stdio.h>
#include  <stdlib.h>

int main(){
int soma, product, value1, value2;
float average;

printf("Insert a number:\n");
scanf("%d",&value1);

printf("Insert another number\n:");
scanf("%d",&value2);

average = (value1 + value2) / 2;
soma = (value1 + value2);
product = (value1 * value2);

system("cls");

if (value1 == value2)
{
    printf("The Values inserteds are, %d, %d \n", value1,value2);
    printf("The values are equal.\n");
} else if (value1 < value2 ){
    printf("The Number %d is the bigger value and the number %d is the minor!\n", value2, value1);
    

} else {
    printf("The Number %d is the bigger value and the number %d is the minor!\n" ,value1, value2);
    
}
if (value1 == value2)
{
    printf("Their values are equal.");
}



printf("---------------------------------------------\n");
printf("Average:%.1f\n", average);
printf("---------------------------------------------\n");
printf("Soma:%d\n",soma);
printf("---------------------------------------------\n");
printf("Product:%d\n", product);

 
system("pause");
return 0;
}