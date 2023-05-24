/*
Elabore um algoritmo usando operações lógicas para informar se uma 
pessoa é obrigada a votar. 
Considere que a regra é que menores de 18 e maiores que 65 não são obrigados a votar. 
*/
#include   <stdio.h>
#include  <stdlib.h>

int main (){
int age;

printf("to knows if it is obligatory to vote: \n");

printf("insert your age:\n");
scanf("%d", &age);



if (age >= 18  &&  age <= 65){
    printf("Is Obligatory to vote!\n");
} else{
    printf("Don't is Obligatory to vote!\n");

}



system("pause");
    return 0;
}
