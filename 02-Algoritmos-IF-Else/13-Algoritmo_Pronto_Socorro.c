/* Desenvolva um programa em C que simule um sistema de triagem em um pronto-socorro. O programa deve:

Apresentar opções de níveis de dor do paciente:

1: Dor leve
2: Dor moderada
3: Dor intensa


Solicitar ao usuário que informe o nível de sintoma (1 a 3).

Solicitar a idade do paciente.

Determinar a gravidade do atendimento com base na dor informada:

Dor leve (1): gravidade 1
Dor moderada (2): gravidade 2
Dor intensa (3): gravidade 3


Ajustar a gravidade considerando a faixa etária:

Pacientes com menos de 5 anos ou mais de 70 anos terão a gravidade aumentada em 1, priorizando seu atendimento.


Definir o tempo estimado de espera com base na gravidade ajustada:

Gravidade 4 ou mais: prioridade máxima, atendimento imediato (tempo de espera 0 minutos).
Gravidade 3: alta prioridade, tempo de espera de 5 minutos.
Gravidade 2: prioridade moderada, tempo de espera de 20 minutos.
Gravidade 1: prioridade baixa, tempo de espera de 45 minutos.


Exibir a prioridade de atendimento e o tempo estimado de espera ao paciente.


Elabore um programa que realize esses passos e apresente as informações de forma clara, simulando a triagem de um paciente em um pronto-socorro.
*/

#include <stdio.h>

int main() {
    int idade, sintoma, gravidade;
    float tempoEspera;
    
    printf("=== PRONTO-SOCORRO ===\n");
    printf("1 - Dor leve\n");
    printf("2 - Dor moderada\n");
    printf("3 - Dor intensa\n");
    printf("Sintoma (1-3): ");
    scanf("%d", &sintoma);
    
    printf("Idade do paciente: ");
    scanf("%d", &idade);
    
    // Calcula gravidade base
    if(sintoma == 1) {
        gravidade = 1;
    }
    else if(sintoma == 2) {
        gravidade = 2;
    }
    else {
        gravidade = 3;
    }
    
    // Ajusta por idade
    if(idade < 5 || idade > 70) {
        gravidade += 1;  // Idosos e crianças têm prioridade
    }
    
    // Define tempo de espera
    if(gravidade >= 4) {
        tempoEspera = 0;  // Imediato
        printf("PRIORIDADE MÁXIMA\n");
    }
    else if(gravidade == 3) {
        tempoEspera = 5;  // 5 minutos
        printf("Alta prioridade\n");
    }
    else if(gravidade == 2) {
        tempoEspera = 20;  // 20 minutos
        printf("Espera moderada\n");
    }
    else {
        tempoEspera = 45;  // 45 minutos
        printf("Espera longa\n");
    }
    
    printf("Tempo estimado de espera: %.0f minutos\n", tempoEspera);
    
    return 0;
}