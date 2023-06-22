#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#define T 6

int main ()
{
    int vetA[N], vetB[T], i = 0;

    i = 0;
    do{
        vetA[i] = rand()%50+1;

        if(i == 0 || vetA[i] > vetA[i-1])
        {
            i++;
        }

    }while(i < N);

    return 0;
}