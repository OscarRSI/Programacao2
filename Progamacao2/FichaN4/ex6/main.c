/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 9 de Novembro de 2017, 15:24
 */

#include <stdio.h>
#include <stdlib.h>

void retangulo(char car, int l, int c) 
{

    int linha, coluna;
    
    for (linha = 1; linha <= l; linha++) 
    {
        for (coluna = 1; coluna <= c; coluna++)
            if (linha == 1 || linha == l || coluna == 1 || coluna == c)
                printf("%c",car);
            else
                printf(" ");
        printf("\n");

    }
}
    int main(int argc, char** argv) 
    {

        int linhas, colunas;
        char caracteres;

        printf("Introduza um caracter: \n");
        scanf(" %c", &caracteres);
        printf("Introduza o numero de linhas: \n");
        scanf("%d", &linhas);
        printf("Introduza o numero de colunas: \n");
        scanf("%d", &colunas);

        retangulo(caracteres,linhas,colunas);
    return (0);
}

