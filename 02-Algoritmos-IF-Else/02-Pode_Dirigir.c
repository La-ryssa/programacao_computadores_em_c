/*
Desenvolva um programa em C que verifica se uma pessoa está autorizada a dirigir com base na sua idade. O programa deve:

Solicitar ao usuário que informe sua idade.
Verificar se a idade é maior ou igual a 18 anos.
Exibir uma mensagem indicando se a pessoa "Pode dirigir" ou "Não pode dirigir".

O objetivo é determinar automaticamente a permissão para dirigir com base na idade informada.
*/

#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    if (idade >= 18) {
        printf("Pode dirigir\n");
    } else {
        printf("Não pode dirigir\n");
    }
    return 0;
}