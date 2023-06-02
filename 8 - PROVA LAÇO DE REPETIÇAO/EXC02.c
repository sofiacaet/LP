#include<stdio.h>
int main()
{
    // 2. Receba K positivo e realize a soma de todo i de 1 a K

    int K, i, soma = 0;

    do // vai verificar se o numero é positivo
    {
        printf("Digite K positivo: "); 
        scanf("%d", &K);

        if (K < 0)
        {
            printf("Numero negativo!!");
        }

    } while (K < 0);
    
    for (i = 1; i <= K ; i++) // i começa = 1
    {
        soma += i; // soma = soma + i
        printf("%d + ", i);
    }
    printf("= %d", soma);

    return 0;
}