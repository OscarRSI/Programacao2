/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 30 de Novembro de 2017, 10:37
 */

#include <stdio.h>
#include <stdlib.h>
#define LINHAS_MAX 4
#define COLUNAS_MAX 5

int main(int argc, char** argv) 
{
    int i, j, contar, analisar, matriz[LINHAS_MAX][COLUNAS_MAX];
    
    
    for (i = 0; i < LINHAS_MAX; ++i)
    {
        for (j = 0; j < COLUNAS_MAX; ++j)
        {
            printf("Introduza os valores da sua matriz [%d] [%d] ", i, j );
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (i = 0; i < LINHAS_MAX; ++i);
    {
        puts("");
        for (j = 0; j < COLUNAS_MAX; ++j)
        {
            printf("%d", matriz[i][j]);
        }
    }
    
    printf("\n Qual é o numero que deseja analisar? ");
    scanf("%d", &analisar);
    
    for (i = 0; i < LINHAS_MAX; ++i)
    {
        for ( j = 0; j < COLUNAS_MAX; ++j)
        {
            if (matriz[i][j] == analisar)
            {
                ++contar;
            }
        }
    }
    
    printf("Existem %d numeros dentro da matriz", contar, analisar);

    return (0);
}

