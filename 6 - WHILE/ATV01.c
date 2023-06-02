#include<stdio.h>
int main () {
    int n, i = 1, soma = 0;

    n= -1;
    while(n <= 0 && i <= 3)
    {
        printf("Digite N [%d]: ", i);
        scanf("%d", &n);
        i++;
    }

    printf("saiu da restrição");

    while(i <= n)
    {

        soma += i;
        i++;
    }
    printf("A soma eh: %d", soma);

    return 0;
}