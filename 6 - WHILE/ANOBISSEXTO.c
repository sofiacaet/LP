#include<stdio.h>
int main (){
    int ano = 0;

    while (ano <= 0)
    {
        printf("Digite um ano: ");
        scanf("%d", &ano);
    }
    if(ano % 4 == 0)
    {
        printf("Ano bissexto\n");
    }else
    {
        printf("Nao bissexto\n");
    }

    return 0;
}