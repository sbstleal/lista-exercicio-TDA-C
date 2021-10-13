#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    //    5) Fa�a um algoritmo que leia uma vari�vel e some 5 caso seja par ou some 8 caso seja �mpar,
    //    imprimir o resultado desta opera��o.

    int n, resultado;

    printf("Digite o n�mero: ");
    scanf("%d", &n);

    if ((n % 2) == 0)
    {
        resultado = n + 5;
        printf("O valor � par, resuldado � %d.\n", resultado);
    }
    else
    {
        resultado = n + 8;
        printf("O valor � �mpar, resultado � %d.\n", resultado);
    }
    return 0;
}
