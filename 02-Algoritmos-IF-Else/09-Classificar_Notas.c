/*
Desenvolva um programa em C que funcione como um conversor de notas escolares para conceitos. O programa deve:

Solicitar ao usuário que informe uma nota entre 0 e 10.
Validar se a nota inserida está dentro do intervalo permitido (0-10). Caso contrário, exibir uma mensagem de erro.
Classificar a nota de acordo com os seguintes critérios:
9,0 a 10: Conceito A (Excelente)
7,0 a 8,9: Conceito B (Bom)
5,0 a 6,9: Conceito C (Regular)
3,0 a 4,9: Conceito D (Ruim)
Menor que 3,0: Conceito F (Reprovado)

Exibir o conceito correspondente com uma mensagem clara.

O objetivo do programa é ajudar o usuário a compreender a avaliação de sua nota escolar de forma simplificada.
*/

#include <stdio.h>

int main() {
    float nota;
    
    printf("=== CONVERSOR DE NOTAS ===\n");
    printf("Digite a nota (0-10): ");
    scanf("%f", &nota);
    
    if(nota < 0 || nota > 10) {
        printf("ERRO: Nota inválida!\n");
    }
    else if(nota >= 9.0) {
        printf("Conceito: A (Excelente)\n");
    }
    else if(nota >= 7.0) {
        printf("Conceito: B (Bom)\n");
    }
    else if(nota >= 5.0) {
        printf("Conceito: C (Regular)\n");
    }
    else if(nota >= 3.0) {
        printf("Conceito: D (Ruim)\n");
    }
    else {
        printf("Conceito: F (Reprovado)\n");
    }
    
    return 0;
}