#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
//    2) Faça um algoritmo para receber um número qualquer e informar na tela se é par ou ímpar.
    int numero;

    printf("Digite o número: ");
    scanf("%d", &numero);

    if((numero%2) == 0)
    {
        printf("\nO número %d é par!\n", numero);
    } else{
        printf("\nO número %d é impar!\n", numero);
    }
}
