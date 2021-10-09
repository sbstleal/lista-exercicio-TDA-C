#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
//9) Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço
//normal deetiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir
//para ler qual acondição de pagamento escolhida e efetuar o cálculo adequado.
//Código Condição de pagamento
//1 À vista em dinheiro ou cheque, recebe 10% de desconto
//2 À vista no cartão de crédito, recebe 15% de desconto
//3 Em duas vezes, preço normal de etiqueta sem juros
//4 Em duas vezes, preço normal de etiqueta mais juros de 10%
    float valorCompra, valorCompraFinal;
    int descontoAPrazo = 15;
    int descontoAVista = 10;
    int acrescimo = 10;
    int formaPagamento;
    int parcelas;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorCompra);
    printf("Qual será o método de pagamento? Digite: \n1 - à vista \n2 - a prazo\n");
    scanf("%d", &formaPagamento);

    if(formaPagamento == 1)
    {
        valorCompraFinal = valorCompra - (valorCompra * descontoAVista/100);
        printf("Pagamento à vista, você ganhou um desconto de 10 % .\nValor do produto: R$%.2f\nValor com desconto: R$%.2f", valorCompra, valorCompraFinal);
    }
    else if(formaPagamento == 2)
    {
        printf("Você escolheu o pagamento a prazo, digite a quantidade de parcelas (máximo 10x):");
        scanf("%d", &parcelas);

        if(parcelas == 1)
        {
            valorCompraFinal = valorCompra - (valorCompra * descontoAPrazo/100);
            printf("Pagamento a prazo em 1 x, desconto de 15%. \nValor do produto: R$%.2f\nValor com desconto: R$%.2f", valorCompra, valorCompraFinal);
        }
        else if(parcelas == 2)
        {
            printf("Pagamento a prazo em 2 x.\nValor do produto: R$%.2f", valorCompra, valorCompraFinal);
        }
        else if(parcelas > 2 && parcelas < 10)
        {
            valorCompraFinal = valorCompra + (valorCompra * acrescimo/100);
            printf("Pagamento a prazo em %d x, acréscimo de 10%. \nValor do produto: R$%.2f\nValor com acréscimo: R$%.2f", parcelas, valorCompra, valorCompraFinal);
        }
        else if (parcelas > 10)
        {
            printf("Valor de parcela não permitida, iremos assumir a quantidade 10 que é a máxima!\n");
            parcelas = 10;
            valorCompraFinal = valorCompra + (valorCompra * acrescimo/100);
            printf("Pagamento à prazo em %d x, acréscimo de 10%. \nValor do produto: R$%.2f\nValor com acréscimo: R$%.2f", parcelas, valorCompra, valorCompraFinal);
        }
    }
    else
    {
        printf("Forma de pagamento inválida.");
    }
}
