/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 12 de Novembro de 2017, 15:46
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM_ARRAY 10

void limparBufferEntrada()
{
    char ch;
    while ((ch = getchar ()) != '\n' && ch != EOF);
}
char lercaracter()
{
    int i;
    char vetor[TAM_ARRAY];
    
    for (i = 1; i <= TAM_ARRAY; ++i) 
    {
        printf("Introduza o seu caracter: \n");
        vetor[i] = getchar();
        limparBufferEntrada();
    }
    verificarcaracter(vetor);
}

void verificarcaracter (char vetor[])
{
    int i, contar = 0;
    char verifica; 
    {
        printf("Introduza o caracter que deseja verificar: \n");
        scanf("%c", &verifica);
        printf("\n");
        limparBufferEntrada();
        
        for (i = 1; i <= TAM_ARRAY; ++i)
        {
            if (verifica == vetor[i])
            {
                ++contar;
                printf("Em posição");
                printf("%d. \n", i);
            }
        }
        printf("Existem %d caractere (%c) registados", contar, verifica);
    }
}
int main(int argc, char** argv) 
{

    int i;
    char caracter, vetor[TAM_ARRAY];
    i = lercaracter();
    return (0);
}

