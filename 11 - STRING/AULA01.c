#include<stdio.h>
int main()
{
    // Em vez de serem números são caracteres.
    // STRING é conjunto de caracteres.
    // Toda vez que quiser ler ou imprimir um CARACTER o percente que se usa é [%c]
    // Para STRING se usa o percente [%s], s de STRING.
    // Quando coloca aspas duplas entende se que aquilo é uma STRING.
    // Havera momentos que tera que manipular a STRING inteira e outros que tera q manipular apenas partes da STRING.  
    // STRING 
    // Toda vez que tiver que declarar uma STRING vai ter q superestimar o tamanho do vetor de caracteres.
    // Se percorre a STRING ate encontrar o ultimo caracter.
    // Toda  STRING tem um \0 no final.
    // O  tamanho do vetor é [10], dentro desse vetor tem a  STRING [IFPR], 
    // ou seja o vetor de caracter tem tamanho [10] e a STRING tem tamanho [4].
    // Nome[10] = ["a"]; --- em nome tem a STRING "a", na posição 0 tem o caracter 'a'.
    // Inverter uma STRING, (ATIVIDADE POSSÍVEL DE PROVA).

    // CADA POSIÇÃO PODE TER 1 CARACTER
    // \0 é fim de STRING.

    char op, nome[10], i; // declarou um vetor de carcter 10 

    op = '1'; // Esta atribuindo o caracter 1 para a variável [op]

    nome[0] = 'I'; // Quando olha a STRING inteira se ve [IFPR]
    nome[1] = 'F';  
    nome[2] = 'P';
    nome[3] = 'R';

    scanf("%s", &nome);
    gets(nome); // O GETS equivale ao scanf("%s", &nome);
                // O GETS não consegue ler duas ou mais STRINGS com espaço.
                // O GETS só lê uma STRING.
                // gets é uma função de leitura para ler STRINGS.

    puts (nome); // O PUTS não é muito usado, ele só pode ler uma STRING por vez igual o GETS.
    // puts é como o printf.

    for (i = 0; nome[i] != '\0'; i++) // Estrutura padrão para percorrer um STRING.
    {                                 // != DIFERENTE DE
        /* code */
    }

    return 0;
}
