#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

#define N 6

            // AULA 2 DE VETOR DIA: 01/06
            //  1- PEGAR SIMULAR UM JOGO DA MEGA SENA, VET[6], 6 VALORES ALEATORIOS ENTRE 1 - 60
            //  2 VETORES
            //  1 PARA VALORES ALEATORIOS ENTRE (1 E 10)
            //  1 PARA SEU PALPITE
int main() 
{
    srand(time(NULL));
    int vet[N], i = 0, j, acertos = 0, vet2[N], existe, vet3[N], k = 0;

    do
    {
        vet[i] = (rand()%10)+1;

        existe = 0;
        for (j = 0; j < i; j++)
        {
            if (vet[j] == vet[i])
            {
                existe = 1;
                break;
            }
            
        }

        if (existe == 0)
        {
            i++;
        }
        
    } while (i < N);
    
    for (i = 0; i < N; i++)
    {
        printf("Digite o palpite[%i]: ", i + 1);
        scanf("%i", &vet2[i]);
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (vet[i] == vet2[j])
            {
                vet3[k] = vet[i];
                k++;
                acertos++;
            }
            
        }
    }

    printf("\nVc acertou: %i\n", acertos);

    for (i = 0; i < acertos; i++)
    {
        printf("%d ", vet3[i]);
    }
    

    printf ("\n\n");
    return 0;
}
