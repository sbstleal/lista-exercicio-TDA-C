#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //    4) Encontrar o dobro de um n�mero caso ele seja positivo e o seu triplo caso seja negativo, imprimindo o resultado.
    setlocale(LC_ALL, "portuguese");

    int n, resultado;

    printf("Digite o n�mero: ");
    scanf("%d", &n);

    if (n > 0)
    {
        resultado = n + n;
        printf("O n�mero %d � positivo, resultado: %d", n, resultado);
    }
    else if (n < 0)
    {
        resultado = n + n + n;
        printf("O n�mero %d � negativo, resultado: %d", n, resultado);
    }
    return 0;
}
