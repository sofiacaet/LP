#include<stdio.h>
int main ()
{
    //3. Escreva um programa que leia números inteiros positivos. 
    //O programa encerra quando o usuário digitar um número negativo. 
    //Ao fim, dos números digitados, mostrar: 
    //quantidade de valores, maior e menor valor, a soma dos valores e a média.
    
    int n = 1, maior = 0, menor = 0, quant = 0, soma = 0;
    float media = 0;

    while (n >= 1) // enquanto o n for maior que 1 
    {
        printf("Digite um numero positivo: ");
        scanf("%d", &n);

        if ((maior == 0) && (menor == 0))
        {
            maior = n; //inicializando o maior numero e o menor numero com o primeiro n que o usuario digitar
            menor = n;

        }
        else if((n < menor) && (n >= 1))
        {
            menor = n; //vai estar atribuindo menor a n
        }
        else if((n > maior) && (n >= 1))
        {
            maior = n;
        }

        soma += n; // soma = soma + n;
                    // soma += vai ser igual a somar ela mesma com n
                   // n começa em 0 entao a soma vair ser 0 da primeira vez
                   // se o usuario digitar 2 vai ser 0 + 2= 2
                   // 2 vai ser guardado em soma
                   // se o usuario digitar 3 vai ser soma + 3= 5 pq 2 estava guardado em soma

        quant++;
        
    }

    media = soma / (quant - 1);

    printf("O maior valor eh: %d\n", maior);
    printf("O menor valor eh: %d\n", menor);
    printf("A soma eh: %d\n", soma);
    printf("A quantidade de valores digitados eh: %d\n", quant - 1);
    printf("A media dos valores eh: %.2f\n", media); // %.2 == depois do ponto quer duas casas
    return 0;
}