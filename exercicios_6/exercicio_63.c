/* Escreva um algoritmo em linguagem C que calcule a média salarial semestral de uma pessoa.
   - O algoritmo deve receber como entrada o salário de cada mês;
   - Como saída, o algoritmo deve fornecer a média dos salários considerando somente duas casas decimais. */

#include <stdio.h>

int main(void)
{
    int semestre, mes;
    float salario, soma = 0;

    printf("<<< MEDIA SALARIAL SEMESTRAL >>>\n\n");

    do
    {
        printf("Qual semestre? (1 ou 2)\n");
        scanf("%d", &semestre);
    }
    while (semestre != 1 && semestre != 2);

    if (semestre == 1)
    {
        mes = 1;
    }
    else
    {
        mes = 7;
    }

    int i = 0;
    do
    {
        printf("Digite o salario do mes %d: R$ ", mes);
        scanf("%f", &salario);
        soma +=salario;
        mes++;
        i++;
    }
    while (i < 6);

    printf("MEDIA SEMESTRAL: R$ %.2f", soma/6);

    return 0;
}