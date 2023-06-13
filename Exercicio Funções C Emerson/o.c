#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void tabuada(int numero)
{
    int i, resultado;

    for (i = 1; i <= 10; i++)
    {
        resultado = numero * i;
        printf("%d X %d = %d\n", numero, i, resultado);
    }
}

int main()
{
    setlocale(LC_ALL, "");

    int numero;

    printf("Para saber a tabuada, insira um número: \n");
    scanf("%d", &numero);

    tabuada(numero);

    return 0;
}
