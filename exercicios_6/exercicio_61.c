/* Leia dois números inteiros A e B, e na sequência:
   - Apresente ambos e todos os números inteiros existentes entre eles, do menor número para o maior número;
   - Calcule a soma de todos os números existentes no intervalo. */

#include <stdio.h>

int main(void)
{
    int A, B, soma = 0;

    printf("<<< INTERVALO DE NUMEROS >>>\n\n");

    printf("Digite os numeros:\n");
    scanf("%d %d", &A, &B);

    printf("Numeros do intervalo:\n");
    if (A < B)
    {
        while (A <= B)
        {
            printf("%d ", A);
            soma += A;
            A++;
        }
    }
    else if (B < A)
    {
        while (B <= A)
        {
            printf("%d ", B);
            soma += B;
            B++;
        }
    }
    else
    {
        printf("%d ", A);
        soma = A;
    }

    printf("\n\nSOMA: %d", soma);

    return 0;
}