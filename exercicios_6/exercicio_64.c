/* Implemente um programa para contabilizar os valores a pagar, a receber e o saldo final de uma
   determinada empresa (o saldo pode ser positivo ou negativo).
   - O programa deve receber um número inteiro N > 0 que representa o número de lançamentos;
   - Na sequência, deve receber N valores de ponto flutuante (double) diferentes de zero,
   representando os lançamentos de contas a pagar ou a receber (os valores negativos representam
   contas a pagar e o valores positivos contas a receber).

   - O programa deve imprimir o total a pagar e o total a receber, além do saldo total do dia
   (positivo ou negativo).
   - Os dados devem estar formatados com duas casas decimais. */

#include <stdio.h>

int main(void)
{
    int N;
    double valor, pagar = 0, receber = 0, saldo = 0;

    printf("<<< PROGRAMA CONTABIL >>>\n\n");

    printf("Digite o numero de lancamentos: ");
    scanf("%d", &N);

    int i = 0;
    do
    {
        printf("Digite o lancamento %d: ", i+1);
        scanf("%lf", &valor);
        saldo += valor;
        if (valor < 0)
        {
            pagar += valor;
        }
        else
        {
            receber += valor;
        }
        i++;
    }
    while(i < N);

    printf("      EXTRATO      \n\n");
    printf("Pagar:.......R$ %.2f\n", pagar);
    printf("Receber:.....R$ %.2f\n", receber);
    printf("Saldo:.......R$ %.2f", saldo);
}