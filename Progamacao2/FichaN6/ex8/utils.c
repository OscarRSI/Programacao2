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

int lastIndex (char espaco, char nomecompleto[], int max)
{
    int i = 0, posicao= -1;
    
    while (nomecompleto[i] != '\0')
    {
        if (nomecompleto[i] == espaco)
        {
            posicao = i;
        }
        ++i;
    }
    return posicao;
}
