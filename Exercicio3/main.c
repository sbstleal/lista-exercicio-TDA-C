#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //    3) Fa�a um algoritmo que leia dois valores inteiros A e B se os valores forem iguais dever� se
    //    somar os dois, caso contr�rio multiplique A por B. Ao final de qualquer um dos c�lculos deve-se
    //    atribuir o resultado para uma vari�vel C e mostrar seu conte�do na tela.
    setlocale(LC_ALL, "portuguese");

    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    if (a == b)
    {
        c = a + b;
        printf("O valor de A  = %d � igual a B = %d, portanto C = %d", a, b, c);
    }
    else
    {
        c = a * b;
        printf("O valor de A  = %d � diferente a B = %d, portanto C = %d", a, b, c);
    }
    return 0;
}
