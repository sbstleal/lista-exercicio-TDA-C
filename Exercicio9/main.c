#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    //9) Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o pre�o
    //normal deetiqueta e a escolha da condi��o de pagamento. Utilize os c�digos da tabela a seguir
    //para ler qual acondi��o de pagamento escolhida e efetuar o c�lculo adequado.
    //C�digo Condi��o de pagamento
    //1 � vista em dinheiro ou cheque, recebe 10% de desconto
    //2 � vista no cart�o de cr�dito, recebe 15% de desconto
    //3 Em duas vezes, pre�o normal de etiqueta sem juros
    //4 Em duas vezes, pre�o normal de etiqueta mais juros de 10%
    float valorCompra, valorCompraFinal;
    int descontoAPrazo = 15;
    int descontoAVista = 10;
    int acrescimo = 10;
    int formaPagamento;
    int parcelas;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorCompra);
    printf("Qual ser� o m�todo de pagamento? Digite: \n1 - � vista \n2 - a prazo\n");
    scanf("%d", &formaPagamento);

    if (formaPagamento == 1)
    {
        valorCompraFinal = valorCompra - (valorCompra * descontoAVista / 100);
        printf("Pagamento � vista, voc� ganhou um desconto de 10 % .\nValor do produto: R$%.2f\nValor com desconto: R$%.2f", valorCompra, valorCompraFinal);
    }
    else if (formaPagamento == 2)
    {
        printf("Voc� escolheu o pagamento a prazo, digite a quantidade de parcelas (m�ximo 10x):");
        scanf("%d", &parcelas);

        if (parcelas == 1)
        {
            valorCompraFinal = valorCompra - (valorCompra * descontoAPrazo / 100);
            printf("Pagamento a prazo em 1 x, desconto de 15%. \nValor do produto: R$%.2f\nValor com desconto: R$%.2f", valorCompra, valorCompraFinal);
        }
        else if (parcelas == 2)
        {
            printf("Pagamento a prazo em 2 x.\nValor do produto: R$%.2f", valorCompra, valorCompraFinal);
        }
        else if (parcelas > 2 && parcelas < 10)
        {
            valorCompraFinal = valorCompra + (valorCompra * acrescimo / 100);
            printf("Pagamento a prazo em %d x, acr�scimo de 10%. \nValor do produto: R$%.2f\nValor com acr�scimo: R$%.2f", parcelas, valorCompra, valorCompraFinal);
        }
        else if (parcelas > 10)
        {
            printf("Valor de parcela n�o permitida, iremos assumir a quantidade 10 que � a m�xima!\n");
            parcelas = 10;
            valorCompraFinal = valorCompra + (valorCompra * acrescimo / 100);
            printf("Pagamento � prazo em %d x, acr�scimo de 10%. \nValor do produto: R$%.2f\nValor com acr�scimo: R$%.2f", parcelas, valorCompra, valorCompraFinal);
        }
    }
    else
    {
        printf("Forma de pagamento inv�lida.");
    }
    return 0;
}
