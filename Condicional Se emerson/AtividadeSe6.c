/*Elabore um algoritmo para receber o login e a senha de um usuário.
Caso o usuário e a senha estejam corretos, mostre a mensagem "Bem-vindo!",
caso contrário, mostre a mensagem "Login ou senha inválidos."
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char savedLogin[250] = "Emerson Souza", savedPassword[250] = "18051997";
    char login[250], password[250];

    printf("Welcome, to access your account insert :\n");
    printf("Login:\n");
    gets(login);

    printf("--------------------------\n");

    fflush(stdin);

    printf("Password:\n");
    gets(password);
    // strcmp = "String Comparation para verificar se os dados são iguais".
    printf("--------------------------\n");
    if (strcmp(login, savedLogin) == 0 && strcmp(password, savedPassword) == 0)
    {
        printf("Free access!\n");
    }
    else
    {
        printf("Access denied!\n");
    }
    printf("--------------------------\n");
    system("pause");
    return 0;
}