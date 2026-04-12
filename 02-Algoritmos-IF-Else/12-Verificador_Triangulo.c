/*
Desenvolva um programa em C que funcione como um validador de triângulos. O programa deve:

Solicitar ao usuário que informe os comprimentos de três lados de uma figura geométrica.
Verificar se esses lados podem formar um triângulo, aplicando a condição de validade:
A soma de qualquer dois lados deve ser maior que o terceiro lado.

Caso os lados formem um triângulo válido, determinar e exibir o tipo do triângulo:
Equilátero: todos os lados iguais.
Isósceles: exatamente dois lados iguais.
Escaleno: todos os lados diferentes.

Caso os lados não possam formar um triângulo, exibir uma mensagem informando que a figura não é um triângulo.

O programa deve exibir as informações de forma clara e objetiva, ajudando na classificação do triângulo com base nos lados informados.
*/

#include <stdio.h>

int main() {
    float a, b, c;
    
    printf("=== VALIDADOR DE TRIÂNGULO ===\n");
    printf("Digite os 3 lados: ");
    scanf("%f %f %f", &a, &b, &c);
    
    // Verifica triângulo válido (soma de 2 lados > terceiro)
    if(a + b > c && a + c > b && b + c > a) {
        printf("Forma um TRIÂNGULO!\n");
        
        if(a == b && b == c) {
            printf("Tipo: EQUILÁTERO (todos lados iguais)\n");
        }
        else if(a == b || a == c || b == c) {
            printf("Tipo: ISÓSCELES (2 lados iguais)\n");
        }
        else {
            printf("Tipo: ESCALENO (todos lados diferentes)\n");
        }
    }
    else {
        printf("NÃO forma um triângulo!\n");
    }
    
    return 0;
}