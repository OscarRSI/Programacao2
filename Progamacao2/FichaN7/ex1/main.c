/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 29 de Novembro de 2017, 18:21
 */

#include <stdio.h>
#include <stdlib.h>
#define LINHAS_MAX 3
#define COLUNAS_MAX 3

int main(int argc, char** argv) 
{
    
    int i, j, z, y, matriz[LINHAS_MAX][COLUNAS_MAX], maior, menor;
    
    
    //ler matriz
    for (z = 0; z < LINHAS_MAX; ++z)
    {
        for (y = 0; y < COLUNAS_MAX; ++y)
        {
            printf("Introduza os valores da sua matriz [%d] [%d]: ",z, y);
            scanf("%d", &matriz[z][y]);
        }
    }
    
    maior = matriz[0][0];
    
    for (i = 0; i < LINHAS_MAX; ++i)
    {
        for (j = 0; j < COLUNAS_MAX; ++j)
        {
            if (maior < matriz[i][j])
            {
                (maior = matriz[i][j]);
            }
        }
    }
    
    menor = matriz[0][0];
    
    for (i = 0; i < LINHAS_MAX; ++i)
    {
        for (j = 0; j < COLUNAS_MAX; ++j)
        {
            if (menor > matriz[i][j])
            {
                (menor = matriz[i][j]);
            }
        }
    }
    
    for (i = 0; i < LINHAS_MAX; ++i)
    {
        puts("");
        for (j = 0; j < COLUNAS_MAX; ++j)
        {
            printf("%d ", &matriz[i][j]);
        }
    }
    
    printf("\n O maior é: %d", maior);
    printf("\n O menor é: %d", menor);

    return (0);
}

