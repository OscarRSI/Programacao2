/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 30 de Novembro de 2017, 11:33
 */

#include <stdio.h>
#include <stdlib.h>
#define LINHAS_MAX 4
#define COLUNAS_MAX 3

int main(int argc, char** argv) 
{

    int i, j;
    int soma = 0, matriz [LINHAS_MAX][COLUNAS_MAX];
    
    for (i = 0; i < LINHAS_MAX; ++i) 
   {
        for (j = 0; j < COLUNAS_MAX; ++j) 
	{
            if (j == 0) {
                printf("Codigo: ");
                scanf("%d", &matriz[i][j]);
            } else if (j == 1) 
	    {
                printf("Teste 1 ");
                scanf("%d", &matriz[i][j]);
            } else if (j == 2) 
	    {
                printf("Teste 2 ");
                scanf("%d", &matriz[i][j]);
            }
        }
    }

    printf("Codigo Teste1  Teste2  Media \n");
     
    for (i = 0; i < LINHAS_MAX; ++i) 
   {
        puts("");
        soma = 0;
        for (j = 0; j < COLUNAS_MAX; ++j) 
	{
            printf("  %.d   ", matriz[i][j]);
        if (j > 0)
        {
            soma += matriz[i][j];
        }
        }
        printf("%.2f", (float) soma / 2);
    }
    return (0);
}

