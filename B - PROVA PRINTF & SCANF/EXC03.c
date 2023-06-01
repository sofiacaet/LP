#include<stdio.h>
int main ()
{
    int segundos, horas, minutos,resto;
    
    printf("Digite um horario em segundos: ");
    scanf("%d", &segundos);
    
    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;
    segundos = resto % 60;


    printf("Sua conversao eh: %d:%d:%d\n!", horas, minutos, segundos);


    return 0;
}