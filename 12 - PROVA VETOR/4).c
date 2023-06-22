#include<stdio.h>
#define A 4
#define B 6 
#define C (A+B)

int main()
{
    int vetA[A], vetB[B], vetC[C], i, j, aux;

    do
    {
        printf("VETOR A\n");
        // Preenche o vetor
        for (i = 0; i < A; i++)
        {
            printf("Digite valor da posicao (%d): ", i);
            scanf("%d", &vetA[i]);
            vetC[j] = vetA[i];
        }

        printf("\n\n");

        printf("VETOR B\n");
        for (i = 0; i < B; i++)
        {
            printf("Digite valor da posicao (%d): ", i);
            scanf("%d", &vetB[i]);
            vetC[j] = vetB[i];
        }

        // Imprimir os valores do vetor
        for (i = 0; i < A; i++)
        { 
            printf("Valor da posicao (%d) eh %d\n: ", i, vetA[i]);
        }

        for (i = 0; i < B; i++)
        { 
            printf("Valor da posicao (%d) eh %d\n: ", i, vetB[i]);
        }

    } while ((vetA[i] == vetA[i]) && (vetA[i] == vetA[i]) && (vetA[i] < 0) && (vetB[i] < 0));
    
   
    return 0;
}