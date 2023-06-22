#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define A 5

int main()
{
    int vet[A], i, copia, indice;
    srand (time(NULL));

    // Preenche o vetor automaticamente
    for (i = 0; i < A; i++)
    {
        vet[i] = rand()%100 + 50;
    }

    // Imprimir os valores do vetor
    for (i = 0; i < A; i++)
    { 
        printf("Valor da posicao (%d) eh %d\n: ", i, vet[i]);
    }

    
    for(i = 1; i < A; i++)
    {
      copia = vet[i];
      indice = i;


    while(indice > 0 && vet[indice - 1] < copia)
      {
        vet[indice] = vet[indice - 1];
        indice = indice - 1;
      }
           vet[indice] = copia;
    }

    printf("Vetor decrescente: ");
    for(i = 0; i < A; i++)
    {
        printf("[%d]", vet[i]);
    }
   
    return 0;
}