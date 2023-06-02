#include<stdio.h>
int main ()
{
    int x = 0;
    
    printf("Digite um numero inteiro ");
    scanf("%d", &x);

    if (x > 0)
    {
        printf("Eh positivo\n");
    } else
    {
        printf("Nulo\n");
    }
    return 0;
}