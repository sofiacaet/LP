#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define A 10

               // 2- Gere vetor com valores aleatórios entre 50 e 100.
               // Implemente o algoritmo de ordenação bolha (bobosort) para organizar o vetor em ordem decrescente.
int main()
{
    srand(time(NULL));

    int vetA[A], i, j, existe, aux;

    i = 0;
    do{
        vetA[i] = rand()%100 + 50;

        existe = 0;
        for(j = 0; j < i; j++)
        {
            if(vetA[j] == vetA[i])
            {
                existe = 1;
                break;
            }
        }

        if(existe == 0)
        {
            i++;
        }

    }while(i < A);

    printf("\nVetor A: ");
    for(i = 0; i < A; i++)
    {
        printf("%i ", vetA[i]);
    }

    for(i = 0; i < A; i++)
    {
        for(j = i+1; j < A; j++)
        {
            if(vetA[i] < vetA[j])
            {
                aux = vetA[i];
                vetA[i] = vetA[j];
                vetA[j] = aux;
            }
        }
    }
    printf("\nVetor A em ordem descrecente: ");
    for(i = 0; i < A; i++)
    {
        printf("%i ", vetA[i]);
    }

    return 0;
}