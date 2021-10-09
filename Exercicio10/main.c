#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
//10) Escreva um algoritmo que leia o número de identificação, as 3 notas obtidas por um aluno nas
//3 verificações e a média dos exercícios que fazem parte da avaliação, e calcule a média de
//aproveitamento, usando a fórmula:
//MA := (nota1 + nota 2 * 2 + nota 3 * 3 + ME)/7
//A atribuição dos conceitos obedece a tabela abaixo. O algoritmo deve escrever o número do aluno,
//suas notas, a média dos exercícios, a média de aproveitamento, o conceito correspondente e a
//mensagem 'Aprovado' se o conceito for A, B ou C, e 'Reprovado' se o conceito for D ou E.
//Média de aproveitamento Conceito
//>= 90 A
//>= 75 e < 90 B
//>= 60 e < 75 C
//>= 40 e < 60 D
//< 40 E
    setlocale(LC_ALL, "portuguese");

    int matricula;
    float nota1, nota2, nota3, mediaExercicios, mediaAproveitamento;

    printf("Informe a matrícula: ");
    scanf("%d", &matricula);
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    printf("Informe a média dos exercícios: ");
    scanf("%f", &mediaExercicios);

    mediaAproveitamento = (nota1 + (nota2*2) + (nota3*3) + mediaExercicios)/7;

    if(mediaAproveitamento >= 9.0)
    {
        printf("\n===============================\n");
        printf("Conceito A.\n");
        printf("===============================\n");
        printf("Aprovado!\n");
        printf("Matrícula: %d.\n", matricula);
        printf("Nota 1: %.2f \nNota 2: %.2f \nNota 3: %.2f \nMédia dos exercícios: %.2f \nMédia de aproveitamento: %.2f.", nota1, nota2, nota3, mediaExercicios, mediaAproveitamento);
        printf("\n===============================\n");
    }
    else if(mediaAproveitamento >= 7.5 && mediaAproveitamento < 9.0)
    {
        printf("\n===============================\n");
        printf("Conceito B.\n");
        printf("===============================\n");
        printf("Aprovado!\n");
        printf("Matrícula: %d.\n", matricula);
        printf("Nota 1: %.2f \nNota 2: %.2f \nNota 3: %.2f \nMédia dos exercícios: %.2f \nMédia de aproveitamento: %.2f.", nota1, nota2, nota3, mediaExercicios, mediaAproveitamento);
        printf("\n===============================\n");
    }
    else if(mediaAproveitamento >= 6.0 && mediaAproveitamento < 7.5)
    {
        printf("\n===============================\n");
        printf("Conceito C.\n");
        printf("===============================\n");
        printf("Aprovado!\n");
        printf("Matrícula: %d.\n", matricula);
        printf("Nota 1: %.2f \nNota 2: %.2f \nNota 3: %.2f \nMédia dos exercícios: %.2f \nMédia de aproveitamento: %.2f.", nota1, nota2, nota3, mediaExercicios, mediaAproveitamento);
        printf("\n===============================\n");
    }
    else if(mediaAproveitamento >= 4.0 && mediaAproveitamento < 6.0)
    {
        printf("\n===============================\n");
        printf("Conceito D.\n");
        printf("===============================\n");
        printf("Reprovado!\n");
        printf("Matrícula: %d.\n", matricula);
        printf("Nota 1: %.2f \nNota 2: %.2f \nNota 3: %.2f \nMédia dos exercícios: %.2f \nMédia de aproveitamento: %.2f.", nota1, nota2, nota3, mediaExercicios, mediaAproveitamento);
        printf("\n===============================\n");
    }
    else
    {
        printf("\n===============================\n");
        printf("Conceito E.\n");
        printf("===============================\n");
        printf("Reprovado!\n");
        printf("Matrícula: %d.\n", matricula);
        printf("Nota 1: %.2f \nNota 2: %.2f \nNota 3: %.2f \nMédia dos exercícios: %.2f \nMédia de aproveitamento: %.2f.", nota1, nota2, nota3, mediaExercicios, mediaAproveitamento);
        printf("\n===============================\n");
    }
    return 0;
}
