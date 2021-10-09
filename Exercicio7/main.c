#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
//   7) Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que
//calcule seu peso ideal, utilizando as seguintes fórmulas:
//● para homens: (72.7 * h) – 58;
//● para mulheres: (62.1 * h) – 44.7
    float altura,resultado;
    char sexo;


    printf("Digite sua altura: ");
    scanf("%f",&altura);

    printf("Digite seu sexo [F] ou [M]: ");
    scanf("%s",&sexo);

    if(sexo == 'm')
    {
        resultado = ((72.7*altura) - 58);

    }
    else if (sexo == 'f')
    {

        resultado = ((62.1*altura) - 44.7);
    }
    printf("O seu peso ideal eh: %.1f kilos.", resultado);
}
