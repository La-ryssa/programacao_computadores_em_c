/*
Desenvolva um programa em C que verifica se uma compra realizada pelo usuário qualifica-se para um desconto. O programa deve:

Solicitar ao usuário que informe o valor da compra (valor real).
Verificar se o valor da compra é superior a R$ 1000,00.
Exibir uma mensagem indicando se o desconto será aplicado ou não, com base na condição.

O objetivo é determinar automaticamente a elegibilidade para desconto com base no valor da compra.
*/

#include <stdio.h>

int main() {
    float valor;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor);
    
    if (valor > 1000) {
        printf("Desconto aplicado\n");
    } else {
        printf("Sem desconto\n");
    }
    return 0;
}