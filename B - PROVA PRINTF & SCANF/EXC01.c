#include<stdio.h>
int main ()
{
    int lado1,lado2,lado3, res;

    printf("Digite os 3 lados do triangulo");
    scanf("%d%d%d", &lado1, &lado2, &lado3);

    res = lado1 + lado2 + lado3;

    printf("O resultado da sua soma eh: %d!\n", res);

    return 0;
}