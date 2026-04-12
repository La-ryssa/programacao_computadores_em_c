/*
Desenvolva um programa em C que calcule e classifique o Índice de Massa Corporal (IMC) de uma pessoa. O programa deve:

Solicitar ao usuário que informe seu peso em quilogramas.

Solicitar ao usuário que informe sua altura em metros.

Calcular o IMC usando a fórmula:
 imc = peso / (altura * altura);

Exibir o valor do IMC com duas casas decimais.

Classificar o IMC de acordo com os seguintes intervalos:

Abaixo de 18,5: Abaixo do peso
Entre 18,5 e 24,9: Peso normal
Entre 25 e 29,9: Sobrepeso
30 ou mais: Obesidade

O programa deve apresentar a classificação correspondente com uma mensagem clara, ajudando o usuário a entender sua condição de peso com base no IMC calculado.
*/
#include <stdio.h>

int main() {
    float peso, altura, imc;
    
    printf("Peso (kg): ");
    scanf("%f", &peso);
    printf("Altura (m): ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    
    printf("IMC: %.2f - ", imc);
    
    if(imc < 18.5) printf("Abaixo do peso");
    else if(imc < 25) printf("Peso normal");
    else if(imc < 30) printf("Sobrepeso");
    else printf("Obesidade");
    
    printf("\n");
    return 0;
}