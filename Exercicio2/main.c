#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    //    2) Fa�a um algoritmo para receber um n�mero qualquer e informar na tela se � par ou �mpar.
    int numero;

    printf("Digite o n�mero: ");
    scanf("%d", &numero);

    if ((numero % 2) == 0)
    {
        printf("\nO n�mero %d � par!\n", numero);
    }
    else
    {
        printf("\nO n�mero %d � impar!\n", numero);
    }
    return 0;
}
