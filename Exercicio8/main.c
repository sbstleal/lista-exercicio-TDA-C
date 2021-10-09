#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
// 10) O IMC – Indice de Massa Corporal é um critério da Organização Mundial de Saúde para dar
//umaindicação sobre a condição de peso de uma pessoa adulta. A fórmula é IMC = peso / ( altura )
//2
//Elabore um algoritmo que leia o peso e a altura de um adulto e mostre sua condição de acordo
//com a tabela abaixo.
    float massa, altura, imc;

    printf("Digite seu peso (em kg): ");
    scanf("%f", &massa);
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    imc = massa / (altura * altura);

    if(imc < 18.5)
        printf("IMC: %.2f\tAbaixo do peso\n", imc);
    else if(imc >= 18.5 && imc < 25)
        printf("IMC: %.2f\tPeso normal\n", imc);
    else if(imc >= 25.1 && imc < 30)
        printf("IMC: %.2f\tSobrepeso\n", imc);
    else if(imc > 30)
        printf("IMC: %.2f\tObesidade grau 1\n", imc);
}
