#include<stdio.h>

#define N 10 //int
#define M 5 //float

//quando fala de vetor fala de posiçao que  ex: é cada gaveta armazena alguma coisa

//int vetor[5]
//o vetor vai armazenar 5 valores inteiros

//para manipular um vetor vc precisa de um laço

//primeira posição do vetor é a posição número 0 SEMPRE

// SE FOR: vet[5] seria: 0 1 2 3 4
// ultima posição sempre vai ser "tamanho -1"
// ex: vet[100]
// primeira posição: 0
// segunda posição: 99

//vetor é indexisavel
//tem que dizer qual é a posição que vai formular

int main()
{
    int vetA[N],vetB[N], i = 0, j;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &vetA[i]);
    }
    for (j = 0; j < N; j++)
    {
        scanf("%d", &vetB[i]);
    }


// manipula assim:
    
    vetA[i] = 10;
//de 0 1 2 3 4 5 6 7 8 9 
// 0 = 10

    vetB[3] = vetB[0] + vetB[1];
    printf("%d", vetA[0]);
    printf("%d", &vetA[2]); 
    
// a posição 2 é a terceira posição
//isso tudo não faz sentido é só para mostrar a sintaxe

// se fosse 0 1 2 3 4
// se 0 recebesse 10 e 1 recebesse 20 então logicamente 3 seria 30

// a procupação é que o endereçamento tem que ser válido

//todo vetor vai ter uma váriavel inteira fazendo papel de um indexadador

//posição de vetor é valor inteiro, SEMPRE

// CONTEUDO DO VETOR PODE SER INT, FLOAT...

//QUANDO DECLARA UM VETOR VAI SER LIXO DE MEMORIA

//ITERAR E PERCORRER (PERCORRE O VETOR)
//PERCORRE DO INICIO ATE O FIM OU SEJA DO 0 ATE O FIM

//IMPRIMA O VETOR ANTERIOR DO FIM AO INICIO:
int vetA[N],vetB[N], i = 0, j;
    for (i = N-1; i <= 0; i--) // em N-1 anteriormente era 9 mais foi mais logico fazer N-1
    {
        scanf("%d", &vetA[i]);
    }
    for (i = 0; i < M; i++)
    {
        scanf("%d", &vetB[i]);
    }


//agora quer que imprima só as posições pares, como imprimiria?
int vetA[N],vetB[N], i = 0, j;
    for (i = N-1; i <= 0; i+2) //modificou i+2
                               // (0+2= 2) (1+2=3) (2+2=4)
    {
        scanf("%d", &vetA[i]);
    }
    for (i = 0; i < M; i++)
    {
        scanf("%d", &vetB[i]);


//QUER ARMAZENAR O CONTEUDO DO vetA PARA O vetB, DE FORMA INVERTIDA
int vetA[N],vetB[N], i = 0, j;
    for (i = 0, j = N - 1; i >= N; i++, j--)
    {
        vetB[1] = vetA[j]; //mudou aq
    }
    for (i = 0; i < M; i++)
    {
        scanf("%d", &vetB[i]);
    }


    return 0;
}