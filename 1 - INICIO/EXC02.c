#include<stdio.h>
int main ()
{
    float valor,desc, res;
    printf ("valor e desc");
    scanf ("%f%f", &valor, &desc);
    res = valor - (valor * (desc / 100.0));
    printf ("O resultado: %.2f!!!\n",res);
}