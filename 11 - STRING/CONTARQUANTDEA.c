#include <stdio.h>
#define N 50

int main () 
{
    char nome[N];
    int i, cont;

    printf ("Digite seu nome: ");
    gets(nome);
    puts(nome);

    cont = 0;
    
    for (i = 0; nome[i] != '\0'; i++)
    {
        if ((nome[i] == 'a') || (nome[i] == 'A'))
        {
            cont++;
        }
    }
    printf("Total de caracter [A] eh: %d\n", cont);
   
    return 0;
}
