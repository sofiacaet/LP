#include<stdio.h>
#define A 5

int main()
{
    //1. Codifique um programa em C que solicite ao usuário 7 valores inteiros. 
    // Considere que o usuário sempre digitará valores entre 0 e 1000. 
    // Após o recebimento, apresente estes valores em ordem decrescente.
    
    int vet[A], i, j, aux;

    for(i = 0; i < A; i++) // preenchendo os valores do vetor com o que o usuário digitou
    {
        printf("Digite o valor [%d]: ", i); 
        scanf("%d", &vet[i]); // o i vai variar 
                              // então o i começa com 0 e vai ate 6
                              // 0 = primeira posição
                              // 6 = ultima posição
    }

    printf("\n");
    
    for ( i = 0; i < A; i++)    
    {
        printf("%d ", vet[i]);
    }

    for(i = 0; i < A; i++) // i = 0
    {
        for (j = i + 1; j < A; j++) //o j vai estar sempre 1 a mais que o i
        {
            if(vet[i] < vet[j]) // vet[i], no começo seria a primeira posição
                                // vet[j], no começo seria a segunda posição
            {
                aux = vet[i];       // atribui ao auxiliar a primeira posição
                vet[i] = vet[j];    // preechimento do vet[2][4][5][3][1]  aux = 0
                aux = vet[j];       // posições do vetor [0][1][2][3][4]
            }
            
        }
    }
    printf("\n");
    for ( i = 0; i < A; i++)    
    {
        printf("%d ", vet[i]);
    }
    
    //printf("Ordem decrescente: [%d]");
    return 0;
}