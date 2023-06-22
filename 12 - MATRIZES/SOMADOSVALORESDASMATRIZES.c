#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

#define L 4
#define C 4

int main()
{
    int i, j, A[L][C], B[L][C], D[L][C]; 
    srand (time(NULL));

    for (i = 0; i < L; i++) // preencher duas matrizes com valores aleatórios
    {
        for (j = 0; j < C; j++)
        {
            A[i][j] = rand()%50;
            B[i][j] = rand()%50;
        } 
    }

    printf("\n*** Matriz A ***\n");
    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("%d\t", A[i][j]); 
        }
        printf("\n");
    }

    printf("\n*** Matriz B ***\n");
    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("%d\t", B[i][j]); 
        }
        printf("\n");
    }

    printf("\n*** Matriz C ***\n");
    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            D[i][j] = A[i][j] + B[i][j];
            printf("%d\t", D[i][j]); 
        }
        printf("\n");
    }

    return 0;
}