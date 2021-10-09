#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
//10) Escreva um algoritmo que leia o n�mero de identifica��o, as 3 notas obtidas por um aluno nas
//3 verifica��es e a m�dia dos exerc�cios que fazem parte da avalia��o, e calcule a m�dia de
//aproveitamento, usando a f�rmula:
//MA := (nota1 + nota 2 * 2 + nota 3 * 3 + ME)/7
//A atribui��o dos conceitos obedece a tabela abaixo. O algoritmo deve escrever o n�mero do aluno,
//suas notas, a m�dia dos exerc�cios, a m�dia de aproveitamento, o conceito correspondente e a
//mensagem 'Aprovado' se o conceito for A, B ou C, e 'Reprovado' se o conceito for D ou E.
//M�dia de aproveitamento Conceito
//>= 90 A
//>= 75 e < 90 B
//>= 60 e < 75 C
//>= 40 e < 60 D
//< 40 E
    setlocale(LC_ALL, "portuguese");

    int matricula;
    float nota1, nota2, nota3, mediaExercicios, mediaAproveitamento;

    printf("Informe a matr�cula: ");
    scanf("%d", &matricula);
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    printf("Informe a m�dia dos exerc�cios: ");
    scanf("%f", &mediaExercicios);

    mediaAproveitamento = (nota1 + (nota2*2) + (nota3*3) + mediaExercicios)/7;

    if(mediaAproveitamento >= 9.0)
    {
        printf("\n===============================\n");
        printf("Conceito A.\n");
        printf("===============================\n");
        printf("Aprovado!\n");
        printf("Matr�cula: %d.\n", matricula);
        printf("Nota 1: %.2f \nNota 2: %.2f \nNota 3: %.2f \nM�dia dos exerc�cios: %.2f \nM�dia de aproveitamento: %.2f.", nota1, nota2, nota3, mediaExercicios, mediaAproveitamento);
        printf("\n===============================\n");
    }
    else if(mediaAproveitamento >= 7.5 && mediaAproveitamento < 9.0)
    {
        printf("\n===============================\n");
        printf("Conceito B.\n");
        printf("===============================\n");
        printf("Aprovado!\n");
        printf("Matr�cula: %d.\n", matricula);
        printf("Nota 1: %.2f \nNota 2: %.2f \nNota 3: %.2f \nM�dia dos exerc�cios: %.2f \nM�dia de aproveitamento: %.2f.", nota1, nota2, nota3, mediaExercicios, mediaAproveitamento);
        printf("\n===============================\n");
    }
    else if(mediaAproveitamento >= 6.0 && mediaAproveitamento < 7.5)
    {
        printf("\n===============================\n");
        printf("Conceito C.\n");
        printf("===============================\n");
        printf("Aprovado!\n");
        printf("Matr�cula: %d.\n", matricula);
        printf("Nota 1: %.2f \nNota 2: %.2f \nNota 3: %.2f \nM�dia dos exerc�cios: %.2f \nM�dia de aproveitamento: %.2f.", nota1, nota2, nota3, mediaExercicios, mediaAproveitamento);
        printf("\n===============================\n");
    }
    else if(mediaAproveitamento >= 4.0 && mediaAproveitamento < 6.0)
    {
        printf("\n===============================\n");
        printf("Conceito D.\n");
        printf("===============================\n");
        printf("Reprovado!\n");
        printf("Matr�cula: %d.\n", matricula);
        printf("Nota 1: %.2f \nNota 2: %.2f \nNota 3: %.2f \nM�dia dos exerc�cios: %.2f \nM�dia de aproveitamento: %.2f.", nota1, nota2, nota3, mediaExercicios, mediaAproveitamento);
        printf("\n===============================\n");
    }
    else
    {
        printf("\n===============================\n");
        printf("Conceito E.\n");
        printf("===============================\n");
        printf("Reprovado!\n");
        printf("Matr�cula: %d.\n", matricula);
        printf("Nota 1: %.2f \nNota 2: %.2f \nNota 3: %.2f \nM�dia dos exerc�cios: %.2f \nM�dia de aproveitamento: %.2f.", nota1, nota2, nota3, mediaExercicios, mediaAproveitamento);
        printf("\n===============================\n");
    }
    return 0;
}
