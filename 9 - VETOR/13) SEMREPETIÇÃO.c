#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define A 20
// 1- Gere um vetor com valores interos entre 1 e 50, com valores aleatórios e sem repetições.

int main()
{
    srand(time(NULL));
    int vetA[A], i, j, existe;

    i = 0;
    do
    {
        vetA[i] = rand()%50 + 1; // Para gerar valores aleatórios de [1] a [50]

        existe = 0;
        for(j = 0; j < i; j++)
        {
            if(vetA[j] == vetA[i])
            {
                existe = 1;
                break; // O BREAK quebra o laço de repetição mais próximo dele
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

    return 0;
}