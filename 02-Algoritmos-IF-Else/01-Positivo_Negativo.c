/*
Desenvolva um programa em C que realiza a análise de um número real informado pelo usuário. O programa deve:

Solicitar ao usuário que digite um número real.
Verificar se o número é positivo, negativo ou zero.
Exibir uma mensagem indicando se o número é "POSITIVO", "NEGATIVO" ou "ZERO", incluindo o valor informado com duas casas decimais.

O objetivo é classificar o número de acordo com seu valor.
*/

#include <stdio.h>

int main() {
    float numero;
    
    printf("=== ANÁLISE DE NÚMERO ===\n");
    printf("Digite um número: ");
    scanf("%f", &numero);
    
    if(numero > 0) {
        printf("%.2f é POSITIVO\n", numero);
    }
    else if(numero < 0) {
        printf("%.2f é NEGATIVO\n", numero);
    }
    else {
        printf("O número é ZERO\n");
    }
    
    return 0;
}