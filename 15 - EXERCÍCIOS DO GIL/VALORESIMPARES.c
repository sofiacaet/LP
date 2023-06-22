#include<stdio.h>
int main ()
{
    // Codifique um programa em C que solicite ao usuário dois valores inteiros 
    // e apresente todos os números ímpares entre eles. 
    

    int valor = 0, valor1 = 0, valor2 = 0; 
    
    do // o do while ta verificando se o numero é positivo
    {
        printf("Digite dois valores: ");
        scanf("%i %i", &valor1, &valor2);
        
    } while ((valor1 < 0) || (valor2 < 0) || (valor1 > valor2));
    

    for (valor = valor1; valor <= valor2; valor++) // números digitados: [2] [10]
                                      // números ímpares: [3] [5] [7] [9]
    {  
        if(valor % 2 == 1)
        {
            printf("%d ",valor);
        }
    }

    return 0;
}