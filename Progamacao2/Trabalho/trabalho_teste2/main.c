/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 4 de Dezembro de 2017, 22:10
 */

#include <stdio.h>
#include <stdlib.h>
#define MATRIZ_MAX 9
#define TOKEN_MAX 2
#define TRACO '-'

void clean_buffer ()
{
    char ch;
    while (( ch = getchar()) != '\n' && ch != EOF);
}

//escolher o token

void Token ( char token[])
{
    int i;
    char nomejogador[10];
    
    for (i = 0; i < TOKEN_MAX; ++i)
    {
        printf("Introduza o nome do jogar %d: \n", i +1);
        scanf("%s", &nomejogador);
        clean_buffer();
        printf("Escolha a sua token %s: \n", nomejogador);
        scanf("%c", &token[i]);
        clean_buffer();
        
        if (token[0] == token[1])
        {
            printf("Token ja existente. Introduza um novo. \n");
            clean_buffer();
            --i;
        }
    }
}

void tokenmatriz (int matriz[][MATRIZ_MAX],int c, int linha, char token[], int jogador)
{
    int i, j;
 
    
    for (i = -1; i < MATRIZ_MAX; ++i)
    {
        for (j = -1; j < MATRIZ_MAX; ++j)
        {
            if (jogador == 1)
            {
                matriz[linha][c] = token[0];
            }else if (jogador == 2)
            {
                matriz[linha][c] = token[1];
            }
        }
    }
}
void tracomatriz (int matriz[][MATRIZ_MAX])
{
    int i;
    int j;
    
    for (i = 0; i < MATRIZ_MAX; ++i)
    {
        for(j = 0; j < MATRIZ_MAX; ++j)
        {
            matriz[i][j] = TRACO;
        }
    }
}

void escrevermatriz (int matriz[][MATRIZ_MAX])
{
    int i, j;
    int letra = 65;
    
    printf(" \n ");
    printf(" ");
    printf("|");
    
    for (i = 0; i < MATRIZ_MAX; ++i)
    {
        printf("%c|", letra);
        ++letra;
    }
    
    printf("\n");
    
    for (i = 0; i < MATRIZ_MAX; ++i)
    {
        printf("%d", i + 1);
        printf("|");
        
        for (j = 0; j < MATRIZ_MAX; ++j)
        {
            printf("%c", matriz[i][j]);
            printf("|");
        }
        printf("\n");
    }
}

int confimarjogada(int matriz[][MATRIZ_MAX], int jogador,int n1jogada,int n2jogada)
{
    int i,j;
  
    
    //horizontal
    
    for (i = 0; i < MATRIZ_MAX; i++)
    {
        for (j = 0; MATRIZ_MAX - 2;j++)
        {
            if (matriz[i][j] != '-' && matriz[i][j] == matriz[i][j + 1] && matriz[i][j] == matriz[i][j + 2])
            {
                if (jogador == 0)
                {
                    printf("Jogador 1 ganhou com %d jogadas.", n1jogada);
                    return 1;
                }else if (jogador == 1)
                {
                    printf("Jogador 2 ganhou com %d jogadas.", n2jogada);
                    return 1;
                }
            }
        }
    }
    
    //vertical
    
    for (i = 0; MATRIZ_MAX -2; i++)
    {
        for (j = 0; j < MATRIZ_MAX; j++)
        {
            if (matriz[i][j] != '-' && matriz[i][j] == matriz[i + 1][j] && matriz[i][j] == matriz[i + 2][j])
            {
                if (jogador = 0)
                {
                    printf("Jogador 1 ganhou com %d jogadas.", n1jogada);
                    return 1;
                }else if (jogador == 1)
                {
                    printf("Jogador 2 ganhou com %d jogadas.", n2jogada);
                    return 1;
                }
            }
        }
    }
    
    // Diagonal direita-esquerda
    
    for (i = 0; MATRIZ_MAX -2; i++)
    {
        for (j = 0; MATRIZ_MAX -2; j++)
        {
            if (matriz[i][j + 2] != '-' && matriz[i][j + 2] == matriz[i + 1][j + 1] && matriz[i][j + 2] == matriz[i + 2][j])
            {
                if (jogador == 0)
                {
                    printf("Jogador 1 ganhou com %d jogadas.", n1jogada);
                    return 1;
                }else if (jogador == 1)
                {
                    printf("Jogador 2 ganhou com %d jogadas.", n2jogada);
                    return 1;
                }
            } 
        }
    }
    
    // Diagonal esquerda-direita
    
   for (i = 0; MATRIZ_MAX -2; i++)
    {
        for (j = 0; MATRIZ_MAX -2; j++)
        {
            if (matriz[i][j] != '-' && matriz[i][j] == matriz[i + 1][j + 1] && matriz[i][j] == matriz[i + 2][j + 2])
            {
                if (jogador == 0)
                {
                    printf("Jogador 1 ganhou com %d jogadas.", n1jogada);
                    return 1;
                }else if (jogador == 1)
                {
                    printf("Jogador 2 ganhou com %d jogadas.", n2jogada);
                    return 1;
                }
            } 
        }
    }
    return 0;
}

void jogar (int matriz[][MATRIZ_MAX], char token[TOKEN_MAX])
{
    int i=1, j;
    int linha, coluna = 0, c = 0;
    int letra = 65, vitoria = 0;
    int n1jogada, n2jogada;
    
   while  (1)
    {
        printf("Jogador %d \n", i);
        printf("Para desistir coluna z linha 0. \n");
        printf("Introduza a coluna:");
        scanf("%c", &coluna);
        clean_buffer();
        c = (coluna - 65);
        printf("Introduza a linha:");
        scanf("%d", &linha);
        clean_buffer();
        linha = (linha - 1);
        
        if (c == 57 && linha == -1)
        {
            printf("O jogador %d desistiu.", i);
            break;
        }
        
        tokenmatriz(matriz, c, linha, token, i);
        escrevermatriz(matriz);
        
        if (i == 1) 
        {
            ++i;
            ++n1jogada;
        }else if (i == 2)
        {
            --i;
            ++n2jogada;
        }
        
        
        vitoria = confirmarjogada(matriz, n1jogada, n2jogada, i);
        
        if (vitoria == 1)
        {
            break;
        }
        
    }
}
int main(int argc, char** argv) 
{
    int matriz[MATRIZ_MAX][MATRIZ_MAX];
    char token[TOKEN_MAX];
    
    Token(token);
    tracomatriz(matriz);
    
    escrevermatriz(matriz);
    jogar(matriz, token);

    return (EXIT_SUCCESS);
}

 
