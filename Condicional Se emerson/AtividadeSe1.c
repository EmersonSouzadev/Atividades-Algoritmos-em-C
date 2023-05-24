#include <stdio.h>
#include <stdlib.h>

int main(){
    /*1. Elabore um algoritmo para ler um valor e escrever a mensagem: 
MAIOR QUE 10! se o valor lido for maior que 10, caso contr�rio escrever 
"N�O � MAIOR QUE 10! */
// == Igual �
// != diferente
// >= Maior igual
// <= Menor igual
float value;

printf("Put a number:");
scanf("%f",&value);

if(value > 10){

    printf("is Bigger than 10!");
	} else {
    
    
	printf("isn't Bigger than 10 !");

}


system("pause");
return 0;

}

