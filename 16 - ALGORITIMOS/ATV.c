#include <stdio.h>
int main()
{
    int n1, n2, i, soma;
    printf("Entre com 2 valores: ");
    scanf("%d", &n1);
    scanf("%d", &n2);

    printf("\n\nREPETICAO COM WHILE:\n");
    i = n1;

    while (i <= n2)
    {
        soma = i + n2;
        printf("%d + %d = %d", i, n2, soma);

    }

    printf("\n\nREPETICAO COM DO WHILE:\n");
    i = n1;

    do
    {
        if (i % 2 == 0)
        {
            soma = i++;
            printf("A soma dos pares eh: %d + %d = %d", i, n2, soma);
        }
       
    } while (i <= n2);

    printf("\n\nREPETICAO COM FOR:\n");
    i = n1;

    for (i = n1; i <= n2; i++)
    {
        if (i % 2 == 1)
        {
            printf("\n Valores impares: %d", i);
        }
    }
   
   return 0;
}
