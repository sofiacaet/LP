#include<stdio.h>
int main ()
{
    float valor1, valor2, valor3, res;

    printf("Digite 3 valores");
    scanf("%f%f%f", &valor1, &valor2, &valor3);
    res = ((valor1 + valor2 + valor3) / 3);

    printf("Sua media eh: %.2f!\n", res);

    return 0;
}