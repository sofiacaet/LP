#include<stdio.h>
int main (){
    //5. Leia um N positivo e diga se é um número perfeito. 
    //Um número é dito como perfeito quando a soma de todos os seus divisores, 
    //excluindo-se desse grupo de divisores, o próprio número, por exemplo 6 = 1 + 2 + 3.

    int n, soma = 0, i;

    do // o do while ta verificando se o numero é positivo
    {
        printf("Digite um numero positivo: "); 
        scanf("%d", &n);

        if (n < 0)
        {
            printf("Numero invalido!");
        }
        
    } while (n < 0);

    for(i = 1; i < n; i++) // o codigo só vai rodar enquanto o i for menor que n
        // o for tem 3 partes:                  
        // primeiro: colocar valor em todas a variáveis que vão ser usadas dentro do for
        // segundo: ele roda enquanto a condição for verdadeira
        // terceiro: encrementa as variáveis ou decrementa

    {
        if(n % i == 0) // n = 6  | i = 1
        {
            soma = soma + i; // soma = 0
            printf("%d + ", i);       
        }
    }

    printf("= %d\n", soma);

    if (n == soma) 
    {
        printf("Numero perfeito");
    }else{
        printf("Numero imperfeito");
    }
    
    return 0;
}