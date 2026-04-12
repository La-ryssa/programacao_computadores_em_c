/*
Desenvolva um programa em C que verifica se um número inteiro informado pelo usuário é par ou ímpar. O programa deve:

Solicitar ao usuário que digite um número inteiro.
Utilizar o operador de resto da divisão para determinar se o número é par ou ímpar.
Exibir uma mensagem indicando se o número é "Par" ou "Ímpar".

O objetivo é identificar automaticamente a natureza do número com base na entrada fornecida.
*/

#include <stdio.h>

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%i", &num);

    if (num % 2 == 0) {
        printf("Par\n");
    } else {
        printf("Ímpar\n");
    }
    return 0;
}