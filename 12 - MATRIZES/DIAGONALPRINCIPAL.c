#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

#define L 4
#define C 4

int main()
{
    int i, j, mat[L][C]; 
    srand (time(NULL));

    for (i = 0; i < L; i++) // preencher duas matrizes com valores aleatórios
    {
        for (j = 0; j < C; j++)
        {
            mat[i][j] = rand()%50;
        }
    }

    printf("\n*** Matriz inteira ***\n");
    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n*** diagonal principal ***\n");
    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            if (i == j)
            {
                printf("%d\t", mat[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}
