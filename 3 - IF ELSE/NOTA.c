#include<stdio.h>
int main ()
{
    float nota = 0;
    
    printf("Digite uma nota: ");
    scanf("%f", &nota);

    if ((nota < 0) || (nota > 10))
    {
        printf("invalido\n");
    } 
    else if (nota >= 7)
    {
        printf("Aprovado\n");
    } 
    else if  (nota <= 4)
    {
        printf("exame\n");
    } 
    else 
    {
        printf("reprovado\n");
    }
    
    return 0;
}