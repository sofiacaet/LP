#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

#define NA 3
#define C 100
#define NN 4

int main()
{
    char alunos[NA][C]; 
    float notas[NA][NN], media;
    int i, j;
    
   for (i = 0; i < NA; i++)
   {
        printf("Digite Alunos [%d]: ", i);
        gets(alunos[i]);
        fflush(stdin);

        for (j = 0; j < NN; j++)
        {
            printf("Digite nota [%d]: ", j);
            scanf("%f", &notas[i][j]);
            fflush(stdin);
        }
   }
   printf("\n*** RELATORIO FINAL ***\n");
   for (i = 0; i < NA; i++)
   {
        media = 0;
        printf("Alunos: %s\n", alunos[i]);
        printf("Nota: ");

        for (j = 0; j < NN; j++)
        {
            media += notas[i][j];
            printf("[%.2f]\t",notas[i][j]);
        }
        printf("MEDIA FINAL [%.2F]\n\n", media/NN);
   }
   
    return 0;
}

// Leia o nome de 3 alunos.
// Ler as notas dos 3 alunos.
// Cada aluno tem 4 notas.
// No final imprime o nome dos alunos as suas notas e a media final.