#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


calcularSoma(int numero1, int numero2){
return numero1 + numero2;
}
int main()
{
    setlocale(LC_ALL,"");
    int numero1, numero2, soma;

printf("Insira o 1º numero :\n");
scanf("%d",&numero1);

printf("Insira o 2º número :\n");
scanf("%d",&numero2);

soma = calcularSoma(numero1,numero2);

printf("A Soma dos Números é:%.0d\n", soma);

    
    
    
    system("pause");
    return 0;
}