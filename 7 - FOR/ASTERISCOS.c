#include<stdio.h>
int main ()
{
    //10. Codifique um programa em C que solicite ao usuário a altura e largura de um retângulo.
    //Após o recebimento desenhe esse retângulo utilizando asteriscos (*)

    int larg, alt, i, j;

    do
    {
        printf("Digite a largura  a altura: ");
        scanf("%d %d", &larg, &alt);
    } while ((larg <= 0) || (alt <= 0));
    
    
   
    for(i = 0; i < alt; i++)
    {
        for (j = 0; j < larg; j++)
        {
            printf("* ");
        }
        printf("\n");
    }


}