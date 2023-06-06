/*• Crie um algoritmo que leia 6 valores inteiros pares e, em seguida, mostre na
tela os valores lidos na ordem inversa.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
int i= 0,num[6];

for ( i = 0; i < 6; i++)
{
    printf("Insira o %d numero:", i +1);
    scanf("%d",&num[i]);

}

for ( i= 5; i >= 0; i--)
{
  printf("os numeros inseridos foram : %0d. \n", num[i]);
}




    
    system("pause");
    return 0;
}