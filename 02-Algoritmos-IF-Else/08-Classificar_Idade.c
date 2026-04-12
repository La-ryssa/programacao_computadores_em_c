/*
Desenvolva um programa em C que classifica a faixa etária de uma pessoa com base na sua idade. O programa deve:

Solicitar ao usuário que informe sua idade em anos.
Validar se a idade informada é válida (não negativa). Caso contrário, exibir uma mensagem de erro.
Classificar a pessoa em uma das seguintes categorias de acordo com a idade:
Menor que 13 anos: Criança
Entre 13 e 17 anos: Adolescente
Entre 18 e 59 anos: Adulto
60 anos ou mais: Idoso

Exibir a categoria correspondente de forma clara.

O objetivo é identificar a faixa etária do usuário de maneira simples e direta.
*/

#include <stdio.h>

int main() {
    int idade;
    
    printf("=== CLASSIFICADOR DE IDADE ===\n");
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if(idade < 0) {
        printf("ERRO: Idade inválida!\n");
    } 
    else if(idade < 13) {
        printf("CRIANÇA\n");
    }
    else if(idade < 18) {
        printf("ADOLESCENTE\n");
    }
    else if(idade < 60) {
        printf("ADULTO\n");
    }
    else {
        printf("IDOSO\n");
    }
    
    return 0;
}