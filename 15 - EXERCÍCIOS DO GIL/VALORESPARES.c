#include<stdio.h>
int main ()
{
    // Codifique um programa em C que solicite ao usuário dois valores inteiros 
    // e apresente todos os números pares entre eles. 

    int valor = 0, valor1 = 0, valor2 = 0; 
    
    do 
    {
        printf("Digite dois valores: ");
        scanf("%i %i", &valor1, &valor2);
        
    } while ((valor1 < 0) || (valor2 < 0) || (valor1 > valor2));
    

    for (valor = valor1; valor <= valor2; valor++) // números digitados: [2] [10]
                                      // números pares: [2] [4] [6] [8] [10]
    {  
        if(valor % 2 == 0)
        {
            printf("%d ",valor);
        }
    }

    return 0;
}