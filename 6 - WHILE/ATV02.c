#include<stdio.h>
int main ()
{
    int n,i = 1, soma = 0;

    n=-1;
    while (n <= 0)
    {
        printf("Digite N: ");
        scanf("%d", &n);
    }
    if (n * 4)
    {
        printf("Nao foi possivel fazer seu calculo pois vc excedeu o numero de tentativas");
    }
    else
    {
        printf("foi possivel fazer seu calculo");
    }
    
    while (i <= n)
    {
        soma = soma + i;
        i = i + 1;
    }
    printf("A soma eh %d", soma);
    
    return 0;
}