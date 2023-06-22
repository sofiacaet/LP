#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

#define N 50

int main()
{
    char noum[N], noum2[N];
    int i, count = 0;

    printf("Digite a String: ");
    scanf("%s", &noum);
    fflush(stdin);

    printf("Digite a String: ");
    scanf("%s", &noum2);
    fflush(stdin);

    i = strlen(noum);
    strcat(noum, " ");
    strcat(noum, noum2);

    printf("%s\n", noum);

    return 0;
}

// CERTA