#include<stdio.h>
//ler um vetor (qualquer tamanho), depois vc vai inverter os valores dentro do vetor, porem não pode criar um segundo vetor
//só pode ter um unico vetor, for para leitura, for para imprimir antes da inversão, for para inversão e 
// um for para imprimir depois da inversão

#define N 25

int main()
{
    int vetA[N], i, j, aux;

    for(i = 0; i < N; i++)
    {
        //printf("Digite um valor: ");
        //scanf("%d", &vetA[i]);
        vetA[i] = i+1;
    }

    for(i = 0; i < N; i++)
    {
        printf("%d ", vetA[i]);
    }

    for(i = 0, j = N-1; i < N/2; i++, j--) // [0][1][2][3]        i = 1 j = 2
    {
        aux = vetA[i];
        vetA[i] = vetA[j];
        vetA[j] = aux;  
    }

    printf("\n\n");

    for(i = 0; i < N; i++)
    {
        printf("%d ", vetA[i]);
    }

    printf("\n\n");
    return 0;
}