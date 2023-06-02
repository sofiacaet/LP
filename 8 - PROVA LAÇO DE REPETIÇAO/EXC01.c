#include<stdio.h>
int main()
{
    // 1. Leia N e K positivos, para K > N, e imprima os numeros no intervalo entre K e N
    
    int N, K, i;

    do
    {
        printf("Digite N e K positivos: ");
        scanf("%d %d", &N, &K);
    } while ((N < 1) || (K < 1) || (K < N));

    for (i = N; i <= K; i++)
    {                     // i começa em N pois N vai ser o primeiro número
                          // i vai somando +1
        printf("%d ", i); // i <= K pois quando o i for = 12 e o K = 12, não mostrara o K
        
    }
    
    return 0;
}