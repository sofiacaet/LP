#include<stdio.h>
int main ()
{
    float real, dolar, res;

    printf("Digite 2 valores: ");
    scanf("%f%f", &real, &dolar);
    res = real / dolar;

    printf("A sua conversão do real para o dolar eh %.2f!", res);


    return 0;
}