/*
Elabore um programa em C que simule uma fiscalização eletrônica de velocidade em uma via. O programa deve:

Apresentar o limite de velocidade da via (fixado em 60 km/h).
Solicitar ao usuário que informe a sua velocidade atual.
Validar se a velocidade informada é válida (não negativa).
Se a velocidade for negativa, exibir uma mensagem de velocidade inválida.
Se a velocidade for zero, indicar que o veículo está parado.
Caso a velocidade seja menor que 50% do limite (menos de 30 km/h), aplicar uma multa leve de R$ 100,00 e informar ao usuário.
Se a velocidade estiver dentro do limite, parabenizar o usuário por estar dentro da velocidade permitida.
Se a velocidade estiver acima do limite, calcular o excesso e aplicar a multa de acordo com a gravidade:
    Até 20 km/h acima do limite: multa leve de R$ 100,00.
    Entre 21 km/h e 50 km/h acima do limite: multa média de R$ 200,00.
    Acima de 50 km/h acima do limite: multa grave de R$ 500,00 e suspensão da CNH.

O programa deve exibir informações detalhadas, incluindo o excesso de velocidade e o valor da multa, caso haja. 
*/


#include <stdio.h>

int main() {
    float velocidade, limite = 60.0;
    float valorMulta;

    printf("=== FISCALIZAÇÃO ELETRÔNICA ===\n");
    printf("Limite de velocidade: %.0f km/h\n", limite);
    printf("Sua velocidade: ");
    scanf("%f", &velocidade);

    if (velocidade < 0) {
        printf("Velocidade inválida!\n");
        return 1; 
    }

    if (velocidade == 0) {
        printf("Você está parado.\n");
        return 0; 
    }

    
    if (velocidade < limite * 0.5) {
        valorMulta = 100.00;
        printf("Velocidade abaixo de 50%% do limite.\n");
        printf("Multa LEVE\n");
        printf("Valor da multa: R$ %.2f\n", valorMulta);
        return 0;
    }

    
    if (velocidade <= limite) {
        printf("PARABÉNS! Você está dentro do limite.\n");
    } else {
        float excesso = velocidade - limite;

        if (excesso <= 20) {
            valorMulta = 100.00;
            printf("Multa LEVE\n");
        } else if (excesso <= 50) {
            valorMulta = 200.00;
            printf("Multa MÉDIA\n");
        } else {
            valorMulta = 500.00;
            printf("Multa GRAVE - CNH SUSPENSA!\n");
        }

        printf("Excesso: %.0f km/h\n", excesso);
        printf("Valor da multa: R$ %.2f\n", valorMulta);
    }

    return 0;
}