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
    
    for (i = 0; i < TOKEN_MAX; ++i)  // Escolhe os tokens
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

void tokenmatriz (char matriz[][MATRIZ_MAX],int c, int linha, char token[], int jogador)
{
    matriz[linha][c] = token[jogador-1];
}
void tracomatriz (char matriz[][MATRIZ_MAX])
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

void escrevermatriz (char matriz[][MATRIZ_MAX])
{
    int i, j;
    int letra = 65;
    
    printf(" \n ");
    //printf(" ");
    printf("|");
    
    for (i = 0; i < MATRIZ_MAX; ++i)
    {
        printf("%c|", letra);
        ++letra;
    }
    
    printf("\n");
    
    for (i = 0; i < MATRIZ_MAX; ++i)  //montrar numeros
    {
        printf("%d", i + 1);
        printf("|");
        
        for (j = 0; j < MATRIZ_MAX; ++j) //escreve a matriz
        {
            printf("%c", matriz[i][j]);
            printf("|");
        }
        printf("\n");
    }
}

int confirmarjogada(char matriz[][MATRIZ_MAX],int n1jogada,int n2jogada,int jogador)
{
    int i,j;
  
    
    //horizontal
  
    for (i = 0; i < MATRIZ_MAX; i++)
    {
        for (j = 0; j < MATRIZ_MAX - 2;j++)
        {
            if (matriz[i][j] != '-' && matriz[i][j] == matriz[i][j + 1] && matriz[i][j] == matriz[i][j + 2])
            {
                if (jogador == 1)
                {
                    printf("Jogador 1 ganhou com %d jogadas.", n1jogada);
                    return 1;
                }else if (jogador == 2)
                {
                    printf("Jogador 2 ganhou com %d jogadas.", n2jogada);
                    return 1;
                }
            }
        }
    }
    
    //vertical
 
    for (i = 0; i < MATRIZ_MAX -2; i++)
    {
        for (j = 0; j < MATRIZ_MAX; j++)
        {
            if (matriz[i][j] != '-' && matriz[i][j] == matriz[i + 1][j] && matriz[i][j] == matriz[i + 2][j])
            {
                if (jogador = 1)
                {
                    printf("Jogador 1 ganhou com %d jogadas.", n1jogada);
                    return 1;
                }else if (jogador == 2)
                {
                    printf("Jogador 2 ganhou com %d jogadas.", n2jogada);
                    return 1;
                }
            }
        }
    }
    
    // Diagonal direita-esquerda

    for (i = 0; i<MATRIZ_MAX -2; i++)
    {
        for (j = 0; j< MATRIZ_MAX -2; j++)
        {
            if (matriz[i][j + 2] != '-' && matriz[i][j + 2] == matriz[i + 1][j + 1] && matriz[i][j + 2] == matriz[i + 2][j])
            {
                if (jogador == 1)
                {
                    printf("Jogador 1 ganhou com %d jogadas.", n1jogada);
                    return 1;
                }else if (jogador == 2)
                {
                    printf("Jogador 2 ganhou com %d jogadas.", n2jogada);
                    return 1;
                }
            } 
        }
    }
    
    // Diagonal esquerda-direita

   for (i = 0; i<MATRIZ_MAX -2; i++)
    {
        for (j = 0; j < MATRIZ_MAX -2; j++)
        {
            if (matriz[i][j] != '-' && matriz[i][j] == matriz[i + 1][j + 1] && matriz[i][j] == matriz[i + 2][j + 2])
            {
                if (jogador == 1)
                {
                    printf("Jogador 1 ganhou com %d jogadas.", n1jogada);
                    return 1;
                    
                }else if (jogador == 2)
                {
                    printf("Jogador 2 ganhou com %d jogadas.", n2jogada);
                    return 1;
                }
            } 
        }
    }
    return 0;
}

int JogadaOk(char matriz[][MATRIZ_MAX],int c, int linha) 
{
    if ((c < 0 || c > 8) || (linha < 0 || linha > 8)) 
    {
        printf("Está a jogar numa posição inválida!\n");
        return 0;
    }
    if (matriz[linha][c] != '-') 
    {
        printf("Está a jogar numa posição já ocupada!\n");
        return 0;
    }
    
    return 1;
}

void jogar (char matriz[][MATRIZ_MAX], char token[TOKEN_MAX])
{
    int i=1, j;
    int linha, coluna = 0, c = 0;
    int letra = 65, vitoria = 0;
    int n1jogada=0, n2jogada=0;
    
   while  (1)
    {
        printf("Jogador %d \n", i);
        printf("Para desistir coluna Z linha 0. \n");
        printf("Introduza a coluna:");
        scanf("%c", &coluna);
        clean_buffer();
        c = (coluna - 65);
        printf("Introduza a linha:");
        scanf("%d", &linha);
        clean_buffer();
        linha = (linha - 1);
        
        if (c == 25 && linha == -1)
        {
            printf("O jogador %d desistiu.", i);
            break;
        }
        if (JogadaOk(matriz,c,linha) == 1) 
        {
            tokenmatriz(matriz, c, linha, token, i);
            escrevermatriz(matriz);
            vitoria = confirmarjogada(matriz, n1jogada+1, n2jogada+1, i);
                        
            if (vitoria == 1)
            {
                break;
            }
            
            if (i == 1) 
            {
                ++i;
                ++n1jogada;
            }else if (i == 2)
            {
                --i;
                ++n2jogada;
            }
        }
        
        
        
        
    }
}
int main(int argc, char** argv) 
{
    char matriz[MATRIZ_MAX][MATRIZ_MAX];
    char token[TOKEN_MAX];
    
    Token(token);
    tracomatriz(matriz);
    
    escrevermatriz(matriz);
    jogar(matriz, token);

    return (EXIT_SUCCESS);
}