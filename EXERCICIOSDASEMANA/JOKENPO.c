#include <stdio.h>
#include <time.h> // bibliotecas que tem as funções srand() e time()
#include <stdlib.h>

int main()
{   // O usuario define o número de jogadas, ele joga contra o pc, no final mostra:
    // mostra quem venceu e o número de rodadas que cada um venceu.

    srand(time(NULL));
    int partidas, jogada, jogada2, pedra, papel, tesoura, i;
    int jog1 = 0, jog2 = 0;

    do
    {
        printf("\nDigite o numero de partidas: ");
        scanf("%i", &partidas);

        if (partidas <= 0)
        {
            printf("\nNumero invalido!\n");
            continue;
        }

        for ( i = 0; i < partidas; i++)
        {
            do
            {
                printf("\nEscolha uma opcao: \n");
                printf("(1) Pedra\n");
                printf("(2) Papel\n");
                printf("(3) Tesoura\n");
                printf("> ");
                
                scanf("%i", &jogada);

                if ((jogada > 3) || (jogada <= 0))
                {
                    printf("\nOpcao invalida!\n");
                    continue;
                }

                jogada2 = (rand()%3)+1; // a máquina ta sorteando um numero

                if (jogada2 == 1)
                {
                    printf("\nMaquina: pedra\n");  
                }else if (jogada2 == 2)
                {
                    printf("\nMaquina: papel\n");
                }else {
                    printf("\nMaquina: tesoura\n");
                }

                if (jogada == jogada2)
                {
                    printf("Empate");
                }else if ((jogada == 1 && jogada2 == 3) || (jogada == 2 && jogada2 == 1) || (jogada == 3 && jogada2 == 2))
                {
                    printf("\nVoce ganhou\n");
                    jog1++;
                }else{
                    printf("\nVoce perdeu");
                    jog2++;
                }
                
                
            } while ((jogada > 3) || (jogada <= 0));
        }
        
    } while (partidas <= 0);


    if (jog1 > jog2)
    {
        printf("\nParabens, Voce venceu!\n");
    }else if (jog1 < jog2)
    {
        printf("\nQue pena, Voce perdeu!\n");
    }else
    {
        printf("\nDeu empate!");
    }
    
    printf("Voce: %i\n", jog1);
    printf("Maquina: %i\n", jog2);
    

    return 0;
}