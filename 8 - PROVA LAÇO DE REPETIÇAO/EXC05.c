#include<stdio.h>
int main()
{
    // 5. Escreva um programa que calcule a seguinte série para N termos, onde N > 2:

    int N, i;
    float soma = 0, mult;

    do // vai verificar se o numero é positivo
    {
        printf("\nDigite N positivo: "); 
        scanf("%d", &N);

        if ((N < 0) || (N < 2))
        {
            printf("Numero invalido!!");
        }
        

    } while (N < 2);


    
    for (i = 2; i <= N; i++) 
    {
        if(i % 2 == 0){
            soma = soma - (1 / (float)i * (float) i + 2);
        }else{
            soma = soma + (1 / (float)i * (float) i + 2);
        }
    // k que fica alternando entre -1 e +1
    }

    printf("Soma: %.2f", soma);

    printf("\n\n");
    return 0;
}