/*2. Escreva um algoritmo que leia 5 valores inteiros e ao final
mostre:
a) quantos números são pares;
b) quantos números são impares;*/
#include  <stdio.h>
#include   <stdlib.h>

int main (){
int i, numero, contP= 0, contI= 0;

for (i = 0; i < 5; i++)
{
    printf("Insira um numero :");
    scanf("%d",&numero);
    printf("--------------------\n");
    
    if ( numero % 2 != 0)
    {
        contI++;
    }  
    else if(numero != 0 && numero % 2 == 0) 
     { 
        contP++;
    }
    
}

printf("%d numeros sao pares.",contP);
printf("%d numeros sao impares.",contI);


return 0 ;
}