#include<stdio.h>
int main()
{
    // Codifique um programa em C que solicite ao usuário dois valores inteiros. Após o
    // recebimento dos valores apresente todos os valores pares e ímpares existentes entre eles.
    // Você deve, obrigatoriamente, utilizar apenas um laço de repetição “for()” para
    // resolução do exercício.  
    
    int valor = 0, valor1 = 0, valor2 = 0; 
    
    do 
    {
        printf("Digite dois valores inteiros: ");
        scanf("%i %i", &valor1, &valor2);
        
    } while ((valor1 < 0) || (valor2 < 0) || (valor1 > valor2));
    

    for (valor = valor1; valor <= valor2; valor++) // números digitados: [2] [10]
                                      // números ímpares: [3] [5] [7] [9]
                                      // números pares: [2] [4] [6] [8] [10]
    {
        if(valor % 2 == 1)
        {
            printf("\n Valores impares: %i", valor);
        }
        else if (valor % 2 == 0)
        {
            printf("\n Valores pares: %i", valor);
        }
    }

    return 0;
}



