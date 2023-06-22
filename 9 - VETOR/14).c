#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define A 4
#define B 6
#define C (A+B)
#define D C
int main()                                                   
{
    srand(time(NULL));
    int vet[A], ve[B], i, j,v[C], l, cont=0, soma, vv[D];
    printf(" ---------------------\n");
    printf("\tVETOR A\n");

    for(i = 0, j = 0; i < A; i++, j++)
    {
        vet[i] = rand()%50+1;
        printf("|%2d ", vet[i]);
        v[j] = vet[i];
    }
    printf("\n");
    printf(" ---------------------\n");
    printf("\tVETOR B\n");
    for(i = 0, j = 4; i < B; i++, j++)
    {
        ve[i] = (rand()%50)+1;
        printf("|%2d ", ve[i]);
        v[j] = ve[i];
    }
    printf("\n\n");
    printf(" ---------------------\n");
    printf("\tVETOR C\n");
    for(l = 0; l < C;l++)
    {
        printf("|%2d ", v[l]);
    }
    printf("\n\n");
    printf(" ---------------------\n");
    printf("\tVETOR C\n (pares depois impares)\n");
    for(l = 0; l < C;l++)
    {
        if(v[l] % 2 == 0)
        {
            printf("|%2d ", v[l]);
        }      
    }
    for(l = 0; l < C;l++)
    {
        if(v[l] % 2 != 0)
        {
            printf("|%2d ", v[l]);
        }      
    }
    printf("\n\n");
    printf("primos: \n");
    for(l = 0, i = 2; l < C;l++)
    {
        cont = 0;
        for(i = 1; i <= v[l];i++)
        {
            if(v[l] % i == 0)
            {
                cont++;
            }
        }
        if(cont == 2)
            {
                printf("|%2d ", v[l]);
            }
        
    }
    printf("\n\n");
    printf("divisores de cada numero do vetor\n");
    for(i = 0; i < C; i++)
    {
        soma = 0;
        for(j = 1; j < v[i]; j++)
        {
            if(v[i] % j == 0)
            {
                soma = soma + j;
            }
        }
        vv[i] = soma;
        printf(" %2d = %2d \n ",v[i], vv[i]);
    }
}