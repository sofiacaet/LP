#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define A 10

               // 3- Gere um vetor com valores aleatórios entre 1 e 100. 
               // Implemente o algoritimo de busca binária para pesquisar valores dentro do vetor.
               // Para busca funcionar, o vetor deve estar ordenado.
int main()
{
    srand(time(NULL));
    int vetA[A], i, j, existe, aux,  inicio = 0, fim = A - 1, meio, busca; 
     
    i = 0;
    do{
        vetA[i] = rand()%100 + 1;

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

    printf("\nVetor: ");
    for(i = 0; i < A; i++)
    {
        printf("[%i] ", vetA[i]);
    }

    for(i = 0; i < A; i++)
    {
        for(j = i+1; j < A; j++)
        {
            if(vetA[i] > vetA[j])
            {
                aux = vetA[i];
                vetA[i] = vetA[j];
                vetA[j] = aux;
            }
        }
    }

    printf("\nVetor ordenado: ");
    for(i = 0; i < A; i++)
    {
        printf("[%i] ", vetA[i]);
    }

    printf("\n\nDigite a busca:\n>>>");
    scanf("%d", &busca);
  
    while(inicio <= fim)
    { 
        meio = fim - inicio / 2; 
  
        if (vetA[meio] == busca)
        {
            printf("Posicao: %d", meio);
            break;
        }
        else if(vetA[meio] < busca)
        {
            inicio = meio + 1; 
        }
        else  
        {
            fim = meio - 1; 
        }
    }
    
    return 0;
}