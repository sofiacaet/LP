#include<stdio.h>
#define N 5

int main()
{
    int vet[N], i;

    // Preenche o vetor
    for (i = 0; i < N; i++)
    {
        printf("Digite valor da posicao (%d): ", i);
        scanf("%d", &vet[i]);
    }

    // Imprimir os valores do vetor
    for (i = 0; i < N; i++)
    { 
        printf("Valor da posicao (%d) eh %d\n: ", i, vet[i]);
    }
    
    return 0;
}
