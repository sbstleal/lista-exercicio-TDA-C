#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
//    3) Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais deverá se
//    somar os dois, caso contrário multiplique A por B. Ao final de qualquer um dos cálculos deve-se
//    atribuir o resultado para uma variável C e mostrar seu conteúdo na tela.
    setlocale(LC_ALL, "portuguese");

    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    if (a == b)
    {
        c = a + b;
        printf("O valor de A  = %d é igual a B = %d, portanto C = %d", a, b, c);
    }
    else
    {
        c = a * b;
        printf("O valor de A  = %d é diferente a B = %d, portanto C = %d", a, b, c);
    }
}
