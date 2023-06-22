#include<stdio.h>
#define N 50

int main () 
{
    char noum[N];
    int i, count = 0;

    printf ("Digite a String: ");
    scanf("%s", &noum);
    fflush(stdin);
    
    // toupper converte caracter minusculo para maiusculo.
    printf("Total de caracter [A] eh: %d\n", count);
   // as funções da ctype elas olham, tratam e manipulam caracteres

   i = strlen(noum); // TAMANHO DA STRING

   // Leia duas strings e contracene elas QUESTÃO 


   printf("%s\n", noum);

    return 0;
}
