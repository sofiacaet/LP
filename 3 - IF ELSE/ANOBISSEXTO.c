#include<stdio.h>
int main(){
    int ano;
    printf("Digite Ano: ");
    scanf("%d", &ano);
   
    if(ano <= 0){
        printf("Ano Invalido\n");
    } else if(ano % 4 == 0){
        printf("Ano Bissexto\n");
    } else{
        printf("Ano Nao Bissexto\n");
    }
    return 0;
}