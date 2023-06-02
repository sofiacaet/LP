#include<stdio.h>
int main ()
{
    int n,i = 1, soma = 0;
    printf("Digite N: ");
    scanf("%d", &n);

    while (i <= n)
    {
       soma = soma + i;
       i = i + 1;
    }
    printf("A soma eh: %d", soma);
    return 0;
}