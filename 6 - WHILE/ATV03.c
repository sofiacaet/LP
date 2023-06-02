#include<stdio.h>
int main ()
{
    int n,i = 1, soma = 0;
    printf("Digite N: ");
    scanf("%d", &n);
    if (n >0)
    {
        while (i <= n)
        {
            soma = soma + i;
            soma += i;
            i = i + 1;
            i++;
        }
        printf("A soma eh %d", soma);
    }
    else
    {
        printf("N deve ser positivo\n");
    }
    
    return 0;
}