#include <stdio.h>
#include <stdlib.h>

int main(){
    //4. Codifique um programa em C que simule um caixa eletrônico, com as opções: 1 -
    //Depósito, 2 - Saque e 0 - Sair. A cada operação realizada, o valor atualizado do saldo
    //deve ser apresentado. Veja o exemplo a seguir:
    int op;
    float dep, saque, saldo = 0; 

    do
    {
        system("cls");
        printf("\nDigite a opcao: ");
        printf("\n(1) Deposito\n(2) Saque\n(3) Ver saldo\n(0) Sair\n> ");
        scanf("%i", &op);

        if ((op < 0 ) || (op > 3))
        {
            printf("\nValor invalido!\n");
            continue;
        }

        switch (op) // como se fosse um if, mas não funciona com "&&", "||".
        {
            case 1: // case = caso tal coisa
                printf("\nDigite o valor do deposito: ");
                scanf("%f", &dep);

                saldo = saldo + dep;
                printf("\nDeposito realizado!\n");
                break;
            case 2:
                printf("\nDigite o valor do saque: ");
                scanf("%f", &saque);

                saldo = saldo - saque;
                printf("\nSaque realizado!\n");
                break;
            case 3:
                printf("\nSeu saldo eh: %.2f\n", saldo);
                
                break;
            case 0:
                printf("\nTchau!\n");
                
                break;
        }

    } while (op != 0);
    
    return 0;
}


