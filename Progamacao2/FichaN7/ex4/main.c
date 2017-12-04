/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 30 de Novembro de 2017, 11:48
 */

#include <stdio.h>
#include <stdlib.h>
#define LINHAS_MAX 3
#define COLUNAS_MAX 3

int main(int argc, char** argv) 
{

    int i, j, matrizA[LINHAS_MAX][COLUNAS_MAX] ,matrizB[LINHAS_MAX][COLUNAS_MAX];
    
     for (i = 0; i < LINHAS_MAX; ++i) {
        for (j = 0; j < COLUNAS_MAX; ++j) {
            printf("Introduza os valores [%d] [%d] na matriz ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    
   
    printf("\nMatriz A");
    for (i = 0; i < LINHAS_MAX; ++i) {
        puts("");
        for (j = 0; j < COLUNAS_MAX; ++j) {
            printf("%d ", matrizA[i][j]);
        }
    }
    
  
    printf("\n\nMatriz B");
    for (i = 0; i < LINHAS_MAX; ++i) {
        puts("");
        for (j = 0; j < COLUNAS_MAX; ++j) {
            matrizB[i][j] = matrizA[j][i];
            printf("%d ", matrizB[i][j]);
            
        }
    }
    return (EXIT_SUCCESS);
}

