/*O índice de massa corpórea (IMC) de um
indivíduo é obtido dividindo-se o seu peso (em
Kg) por sua altura (em metros) ao quadrado.
Assim, por exemplo, uma pessoa de 1,67m e
pesando 55kg tem IMC igual a 20,14, já que:
Escreva um programa que solicite ao utilizador
o fornecimento do seu peso em kg e de sua
altura em m e a partir deles calcule o índice de
massa corpórea do utilizador.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float indice(float peso, float altura)
{
    return peso / (altura * 2);
}

int main()
{
    setlocale(LC_ALL, "");
    float peso, altura, imc;

    printf("--------Medidor de IMC---------\n");
    printf("Insira seu peso em KG EX(35.5):\n ");
    scanf("%f", &peso);
    printf("Agora insira sua Altura em metros Ex(1.70):\n");
    scanf("%f", &altura);

    imc = indice(peso, altura);
    system("cls");
    
    printf("-------------TABELA IMC---------------\n");
    printf("SEU IMC É : %.2f. \n", imc);
    printf("(kg/m²)  	       Classificação\n");
    printf("Menor que 18,5	   Magreza \n");
    printf("18,5 a 24,9	       Peso normal\n");
    printf("25 a 29,9	       Sobrepeso\n");
    printf("30 a 34,9	       Obesidade grau I\n");
    printf("35 a 40	           Obesidade grau II\n");
    printf("Maior que 40	   Obesidade grau III\n");

    system("pause");
    return 0;
}
