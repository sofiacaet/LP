#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

             // Gerar valores aleatórios para todas as posições para esse vetor de ponto flutuante
             // Os valores gerados são entre [0] e [100]
int main()
{
    float vet[N]; 
    int i;

    srand (time(NULL));

    for (i = 0; i < N; i++)
    {
        vet[i] = rand()%101; // 101 - 1 = [100]
    }

    for (i = 0; i < N; i++)
    {
        printf("Valor da posicao (%d) eh %.2f\n: ", i, vet[i]);
    }
    
    return 0;
}
