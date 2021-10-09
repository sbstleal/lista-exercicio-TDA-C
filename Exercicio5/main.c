#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
//    5) Faça um algoritmo que leia uma variável e some 5 caso seja par ou some 8 caso seja ímpar,
//    imprimir o resultado desta operação.

    int n, resultado;

    printf("Digite o número: ");
    scanf("%d", &n);

    if((n%2) == 0)
    {
        resultado = n + 5;
        printf("O valor é par, resuldado é %d.\n", resultado);
    }
    else
    {
        resultado = n + 8;
        printf("O valor é ímpar, resultado é %d.\n", resultado);
    }

}
