/*
Desenvolva um programa em C que verifica se uma pessoa é maior de idade. O programa deve:

Solicitar ao usuário que informe sua idade (número inteiro).
Verificar se a idade é maior ou igual a 18 anos.
Exibir uma mensagem indicando se a pessoa é maior ou menor de idade.

O objetivo é determinar automaticamente a condição de maioridade com base na idade informada.
*/

#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    if (idade >= 18) {
        printf("Maior de idade\n");
    } else {
        printf("Menor de idade\n");
    }
    return 0;
}