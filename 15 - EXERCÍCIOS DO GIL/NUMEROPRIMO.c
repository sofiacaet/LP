#include<stdio.h>
int main () 
{
    // Codifique um programa em C que solicite ao usuário um valor inteiro. 
    // Após o recebimento, verifique e indique se esse número é ou não primo. 
    // Primos são números divisíveis apenas por um e por ele mesmo. 
     
    int valor, i;

    do
    {
        printf("Digite um valor primo: ");
        scanf("%i", &valor);

    } while (valor <= 0);
    

    for (i = 1; i == valor; i++)
    {
        if ((i % i == 0) || (i % 1 == 0))
        {
            printf("PRIMO");
        }else
        {
            printf("NAO PRIMO");
        }  
        
    }
    
    return 0;
}