/*3. Elabore um algoritmo para ler o nome de um aluno, sua idade (em anos) e as 
três notas. Calcular a média anual do aluno. Caso a média do aluno seja menor que 7,
 o aluno está reprovado. 
Imprimir: nome, idade, média e se está aprovado ou reprovado. 
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
char name[100] ;
float average, note1, note2, note3;
int age ;

printf("Enter yours informations:\n");
printf("Your name :\n");
gets(name);
printf("Your age:\n");
scanf("%d",&age);
system("cls");
printf("To Know your trimestral everage:\n ");
printf("Insert your first note:\n");
scanf("%f",&note1);
printf("Insert your secont note:\n");
scanf("%f",&note2);
printf("Insert your third note:\n");
scanf("%f",&note3);

average = (note1 + note2 +note3) / 3 ;

printf("Name:%s\n",name);
printf("Age:%d\n",age);
printf("Average:%.1f\n",average);
if (average > 7)
{
    printf("APPROVED!\n");
}

    
    system("pause");
    return 0 ;
}