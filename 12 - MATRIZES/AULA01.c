#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

#define L 5
#define C 3

// 3 por 5 = 3 linhas e 5 colunas.
// se tem um matriz 3 por 3 tem tamanha 9
int main()
{
    int i, j, mat[L][C]; // declarou que a matriz é inteira, tem 5 linhas e 3 colunas, e seu nome é mat.

    for (i = 0; i < L; i++) // o for é para percorrer a matriz
    {
      for (j = 0; i < C; i++)
      {
        mat[i][j] = i + j; 
      }
      
    }
    
    // preencher uma matriz com valores aleatórios

    return 0;
}
