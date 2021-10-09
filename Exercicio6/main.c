#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
//    6) Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em ordem
//decrescente.
//    printf("8) Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em ordem decrescente.\n\n");

    int n1, n2, n3;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    printf("Digite o terceiro número: ");
    scanf("%d", &n3);

    if (n3 < n1)
        if (n1 < n2)
            printf("A ordem decrescente: %d %d %d\n", n2, n1, n3);
        else if (n2 > n3)
            printf("A ordem decrescente: %d %d %d\n", n1, n2, n3);
    if (n1 < n2)
        if (n2 < n3)
            printf("A ordem decrescente: %d %d %d\n", n3, n2, n1);
        else if (n3 > n1)
            printf("A ordem decrescente: %d %d %d\n", n2, n3, n1);
    if (n1 > n2)
        if (n3 > n1)
            printf("A ordem decrescente: %d %d %d\n", n3, n1, n2);
        else if (n3 > n2)
            printf("A ordem decrescente: %d %d %d\n", n1, n3, n2);

    return 0;
}
