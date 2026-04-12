/*
Desenvolva um programa em C que verifica se um estudante foi aprovado ou reprovado com base na nota recebida. O programa deve:

Solicitar ao usuário que informe a nota obtida (valor real).
Verificar se a nota é maior ou igual a 60.
Exibir uma mensagem indicando se o estudante foi aprovado ou reprovado.

O objetivo é determinar a situação do estudante automaticamente com base na nota informada.
*/

#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    if (nota >= 60) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
    return 0;
}