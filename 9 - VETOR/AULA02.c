#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define T 6
#define M 6

// AULA 2 DE VETOR DIA: 01/06
//  1- PEGAR SIMULAR UM JOGO DA MEGA SENA, VET[6], 6 VALORES ALEATORIOS ENTRE 1 - 60
//  2 VETORES
//  1 PARA VALORES ALEATORIOS ENTRE (1 E 10)
//  1 PARA SEU PALPITE

int main()
{
    srand(time(NULL));

    int vetA[T], vetB[M], i, j, palpite;

    for (i = 0; i < M; i++) // preenchendo os valores do vetor com o que o usuário digitou
    {
        printf("De seus 6 palpites: [%d]: ", i);
        scanf("%d", &vetB[i]); // o i vai variar
                               // então o i começa com 0 e vai ate 5
                               // 0 = primeira posição
                               // 5 = ultima posição
    }
    printf("\n");

    for ( j = 1; j < T; j++)
    {
        vetA[j] = (rand()%60)+1;
    }

    

    //for (j = 0; j < T; j++)
    //{
    //    vetA[j] = (rand() % 60) + 1;
    //}

   // do
   // {
   //     if ((i > 60) || (i <= 0))
    //    {
   //         printf("\nOpcao invalida!\n");
   //         continue;
   //     }

    //    i = (rand() % 60) + 1; // a máquina ta sorteando um numero

   // } while ((i > 60) || (i <= 0));


    // DE SEUS 6 PALPITES
    // shift alt F para identar automatico
    return 0;
}