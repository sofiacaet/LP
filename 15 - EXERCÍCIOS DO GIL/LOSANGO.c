#include<stdio.h>
int main () 
{   //Codifique um programa em C que solicite ao usuário a altura de um losango. Considere
    //que a altura sempre será um número ímpar, maior ou igual a três. Após isso, desenhe
    //o losango utilizando emojis. 
    
    int altura, i;

    do
    {
        printf("Digite a altura do losango: ");
        scanf("%i", altura);
    } while ((altura <= 0) || (altura % 2 == 0) || (altura < 3));

    
    for (i = 0; i < altura; i++)
    { 
        //if (i % 2 == 1)
       // {
            printf("*");
       // }
       
    }
     
}

