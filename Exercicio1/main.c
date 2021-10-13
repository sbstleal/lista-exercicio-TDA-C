#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
//   1) Fa�a um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B � menor
//que C.

    setlocale(LC_ALL, "portuguese");

    float a, b, c, soma;

    printf("Digite o valor de A: ");
    scanf("%f",&a);
    printf("Digite o valor de B: ");
    scanf("%f",&b);
    printf("Digite o valor de C: ");
    scanf("%f",&c);

    soma = a + b;

    if (soma < c)
    {
        printf("\nA soma de A + B � menor que C.\n");
        printf("A = %.2f, B = %.2f, C = %.2f, soma de A + B = %.2f", a, b, c, soma);
    }
    else
    {
        printf("\nA soma de A + B � maior que C.\n");
        printf("A = %.2f, B = %.2f, C = %.2f, soma de A + B = %.2f", a, b, c, soma);
    }
    return 0;
}
