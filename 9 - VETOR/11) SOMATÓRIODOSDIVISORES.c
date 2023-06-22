#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h> 

#define N 5

    // Pegar o valor que foi gerado aleatoriamente e fazer o somatório dos seus divisores
     
int main() 
{
    int vet[N], i, soma, soma_geral, divisor;
   
    srand (time(NULL));

    for (i = 0; i < N; i++)
    {
        vet[i] = rand()%11; // Gera números aleatórios entre [0] e [10]
    }

    printf("\n\n");

    for (i = 0; i < N; i++)
    {
        printf("Valor da posicao (%d) eh %.d\n: ", i, vet[i]);
    }

    soma_geral = 0;

     for (i = 0; i < N; i++) // esse FOR é para percorrer todas as posições do VETOR
    {
        soma = 0;
        
        if (vet[i] == 1)
        {
            soma = 1;
        }

        for (divisor = 1; divisor < vet[i]; divisor++) // esse for tem a função de procurar os divisores e somar
        {
           if ((vet[i] % divisor) == 0) // se vet[i] for divisil pelo divisor
           {
                soma += divisor; // soma recebe o valor dele mais o divisor
           }
           
        }
        soma_geral += soma;

        printf("Somatorio de divisores da posicao (%d) eh %.d\n: ", i, soma);
        
    }
    printf("Somatorio Geral dos divisores eh: %d/n", soma_geral);

    return 0;
}