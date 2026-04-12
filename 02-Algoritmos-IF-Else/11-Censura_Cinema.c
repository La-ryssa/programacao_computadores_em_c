/*
Desenvolva um programa em C que controle o acesso de espectadores a filmes com diferentes classificações etárias. O programa deve:

Solicitar ao usuário que informe sua idade.

Apresentar as opções de classificação do filme disponíveis:
10: Livre
12: A partir de 12 anos
14: A partir de 14 anos
16: A partir de 16 anos
18: A partir de 18 anos

Solicitar ao usuário que informe a classificação do filme desejado.
Verificar se o espectador tem idade suficiente para assistir ao filme:
    Se a idade for menor que a classificação, negar o acesso e exibir uma mensagem explicando a razão.
    Se a idade for igual ou maior que a classificação, permitir o acesso.

Caso o acesso seja permitido:
    Se o usuário tiver 18 anos ou mais, informar que é maior de idade.
Caso contrário, recomendar que assista ao filme acompanhado de responsáveis.

O programa deve exibir mensagens claras e objetivas, facilitando a compreensão do usuário sobre sua elegibilidade para assistir ao filme.
*/

#include <stdio.h>

int main() {
    int idade, classificacao;
    
    printf("=== CINEMA ===\n");
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Classificação do filme:\n");
    printf("10 - Livre\n");
    printf("12 - 12 anos\n");
    printf("14 - 14 anos\n");
    printf("16 - 16 anos\n");
    printf("18 - 18 anos\n");
    printf("Classificação: ");
    scanf("%d", &classificacao);
    
    if(idade < classificacao) {
        printf("ACESSO NEGADO!\n");
        printf("Você tem %d anos, mas o filme é para %d+ anos.\n", idade, classificacao);
    }
    else {
        printf("ACESSO LIBERADO!\n");
        if(idade >= 18) {
            printf("Você é MAIOR de idade.\n");
        }
        else {
            printf("Aproveite o filme acompanhado dos responsáveis.\n");
        }
    }
    
    return 0;
}