#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define A 5
// 1- Gere um vetor com: inteiros positivos (entre 1 e 200), aleatórios, primos e sem repetições.

int main()
{
    srand(time(NULL));
    int vetA[A], i, j, existe, div;

    i = 0;
    do
    {
        vetA[i] = rand()%10 + 1; // Para gerar valores aleatórios de [1] a [200]

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


        for (i = 2; i <= A; i++) // 5
        {
            div = 0;
            for ( j = 2; j < i; j++) // 2
            {
                if (i % j == 0)
                {
                    div++;
                    break;
                }
            
            }

            if (div == 0)
            {
                printf("%d ", i);  // 2 3 
            }
        
        }
    }while(i < A);

    printf("\nVetor A: ");
    for(i = 0; i < A; i++)
    {
        printf("%i ", vetA[i]);
    }
    
    return 0;
}