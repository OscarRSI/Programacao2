#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    return 0;
}

void countchar(char a[], int tamanho)
{
    int i, contar;
    
    for (i = 0; i < tamanho; ++i)
    {
        if (a[i] == ' ')
        {
            continue;
        }else 
        {
            ++contar;
        }
    }
    printf("\n O seu nome tem %d letras");
}
