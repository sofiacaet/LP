#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 6
                //Lê um vetor e inverter o valor dentro dele sem usar um segundo valor
                //msms atv do ex3.c com atalhos para digitar as opções dos números de forma automática
int main ()
{
    srand (time(NULL));
    int vetA[N], i = 0, aux;

    for ( i = 0; i < N; i++)
    {
        vetA[i] = (rand()%50)+1;
    }
    printf ("Vetor digitado: [ ");
    for (i = 0; i < N; i++)
    {
        printf ("%d\t" , vetA[i]);
    }
    printf ("]");
    for (i = 0; i < N/2; i++)
    {
        aux = vetA[i];
        vetA[i] = vetA[N-1-i];
        vetA[N-1-i] = aux;
    }
    printf ("\nvetor intertido: [ ");
    for (i = 0; i < N; i++)
    {
    printf ("%d\t" , vetA[i]);
    }
    printf ("]");

    return 0;
}
