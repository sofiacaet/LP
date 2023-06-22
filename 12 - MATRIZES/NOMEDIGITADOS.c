#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

#define L 4
#define C 100

int main()
{
    char nome[L][C];
    int i, j;
   
    for (i = 0; i < L; i++) 
    {
       printf("Digite o nome[%d]: ", i);
       gets(nome[i]);
       fflush(stdin);
    }
    printf("\n*** Nome digitados ***\n");

    for (i = 0; i < L; i++)
    {
        puts(nome[i]);
        fflush(stdin);
    }

    return 0;
}