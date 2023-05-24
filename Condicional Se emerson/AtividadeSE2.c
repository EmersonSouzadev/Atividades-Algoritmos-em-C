/*2. Elabore um algoritmo para ler um valor e escrever a mensagem: “É MAIOR QUE 10!”. 
Se o valor lido for maior que 10, caso contrário escrever “NÃO É MAIOR QUE 10!" 
Verifique se o número digitado é igual a 10, caso seja, escreva a mensagem: "O número é igual a 10!" 
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
float value ;

printf("Insert a number :");
scanf("%f", &value);

if (value > 10)
{
 printf(" The value is bigger than 10!");
} else if(value == 10) {

    printf("The value is equal to 10!");

} else{
    printf("The value isn't Bigger than 10!");

}
system("pause");
return 0;

}