/* Faça um programa para registrar votos para uma eleição de síndico.
   As opções para registrar o voto são:
   1 - Candidata Mary
   2 - Candidato Joe
   3 - Nulo
   4 - Branco.

   O programa deve:
   - Validar a entrada para aceitar votos apenas para os códigos 1, 2, 3 e 4;
   - Permitir registrar votos até informar 0.

   Ao final da votação, apresentar na saída padrão o total de votos e o número de votos para cada candidato. */

#include <stdio.h>

int main(void)
{
    int voto, mary = 0, joe = 0, nulos = 0, brancos = 0, total = 0;

    printf("<<< VOTACAO PARA SINDICO >>>\n\n");

    do
    {
        printf("Digite seu voto: ");
        scanf("%d", &voto);

        switch(voto)
        {
            case 0:
                printf("FIM DA VOTACAO\n\n");
                break;
            case 1:
                total += 1;
                mary += 1;
                break;
            case 2:
                total += 1;
                joe += 1;
                break;
            case 3:
                total += 1;
                nulos += 1;
                break;
            case 4:
                total += 1;
                brancos += 1;
                break;
            default:
                printf("Codigo invalido! Tente novamente.\n\n");
                break;
        }
    }
    while (voto != 0);

    printf("Total de votos.............: %d\n", total);
    printf("Total de votos 1 - Mary....: %d\n", mary);
    printf("Total de votos 2 - Joe.....: %d\n", joe);
    printf("Total de votos 3 - Nulos...: %d\n", nulos);
    printf("Total de votos 4 - Brancos.: %d\n", brancos);
}