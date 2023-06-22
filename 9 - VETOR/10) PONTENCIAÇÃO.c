#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h> // biblioteca que tem várias funções matemáticas
#define N 10

             // Pegar os valores que estão sendo gerados aleatórios e fazer a potenciação deles.
             // Então ele vai ser elevado a alguma base, aonde a potencia vai ser pedida para o usuário digitar.
int main()
{
    float vet[N], potencia; 
    int i;

    srand (time(NULL));

    printf("Digite a potencia: ");
    scanf("%f", &potencia);

    for (i = 0; i < N; i++)
    {
        vet[i] = rand()%101; // 101 - 1 = [100]
    }

    for (i = 0; i < N; i++)
    {
        printf("Valor da posicao (%d) eh %.2f\n: ", i, vet[i]);
    }

    for (i = 0; i < N; i++)
    {
        vet[i] = pow(vet[i], potencia); // Pega o valor que esta armazenado na posição vet[i],(iezima posição de vet) 
                                        // eleva a uma potencia que o usuario digitou;
                                        // calculado isso por meio da função pow (power = potenciação)
                                        // vai pegar esse valor e vai armazenar na própria posição vet[i]
                                        // ESTA FAZENDO UMA SUBSTITUIÇÃO
    }

    printf("\n\n");

    for (i = 0; i < N; i++)
    {
        printf("Valor da posicao (%d) eh %.2f\n: ", i, vet[i]);
    }
    
    return 0;
}