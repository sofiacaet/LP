#include<stdio.h>
int main ()
{
    float celsius, fah;

    printf("Digite uma temperatura em celsius");
    scanf("%f", &celsius);
    fah = ((celsius * 1.8) + 32);
    printf("Sua conversao de celsius para fah eh %.2f!", fah);


    return 0;
}