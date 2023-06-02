#include<stdio.h>
int main ()
{
    float nota1, nota2, media;
    
    printf("Digite duas notas: ");
    scanf("%f%f", &nota1, &nota2);

    if ((nota1 || nota2 < 0) || (nota1 || nota2 > 10))
    {
        printf("invalido\n");
    } 
    else
    {
        media = (nota1 + nota2) / 2.0;

        if (media >= 7)
        {
            printf("Aprovado\n");
        }
        else if  (media <= 4)
        {
            printf("exame\n");
        }
        else
        {
             printf("reprovado\n");
        }
        printf("Sua media eh: %f", media);
    }
    

    return 0;
}