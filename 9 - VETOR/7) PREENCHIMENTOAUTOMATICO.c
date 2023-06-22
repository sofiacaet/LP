#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4

int main()
{
    int vet[N], i;
    srand (time(NULL));

    // Preenche o vetor automaticamente
    for (i = 0; i < N; i++)
    {
        vet[i] = rand()%10; // O RAND vai gerar um número inteiro entre 0 e um limitador [10]
                              // O menor número aleatório que ele gera vai ser [0]
                              // e o maior vai ser [9]
    }

    // Imprimir os valores do vetor
    for (i = 0; i < N; i++)
    { 
        printf("Valor da posicao (%d) eh %d\n: ", i, vet[i]);
    }
    
    return 0;
}