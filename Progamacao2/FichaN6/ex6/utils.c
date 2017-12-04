#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"


void clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int lerString(char *string, int max) {
    if (fgets(string, max, stdin) != NULL) {
        int tamanho = strlen(string) - 1;
        if (string[tamanho] == '\n') {
            string[tamanho] = '\0';
        } else {
            clean_buffer();
        }
        return 1;
    }

   char lerChar (char carater)
   {
       printf("Introduza o caracter que deseja enviar: \n");
       scanf("%c", &carater);
       return  carater;
   }
   
void CountChar (char a[], char carater)
{
    int i, Contar = 0;
    
    for (i = 0; i < STRING_MAX; ++i)
    {
        if (a[i] == carater)
        {
            Contar ++;
        }
    }
    printf("O caracter %c foi introduzido %d.", carater, Contar);
}