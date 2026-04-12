/*
Desenvolva um programa em C que verifica se um número inteiro informado pelo usuário está dentro de um intervalo específico. O programa deve:

Solicitar ao usuário que digite um número inteiro.
Verificar se o número está no intervalo de 10 a 20, inclusive.
Exibir uma mensagem indicando se o número está dentro ou fora do intervalo.

O objetivo é criar uma rotina simples de validação de intervalo.

*/

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero >= 10 && numero <= 20) {
        printf("Dentro do intervalo\n");
    } else {
        printf("Fora do intervalo\n");
    }
    return 0;
}