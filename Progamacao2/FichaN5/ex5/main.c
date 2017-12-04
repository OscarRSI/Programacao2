/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 13 de Novembro de 2017, 18:52
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void limparBufferEntrada ()
{
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void conteudo (double numero[])
{
    int i;
    printf("\n Conteudo \n");
    for (i = 0; i < MAX; ++i)
    {
        printf(" %.lf ", numero[i]);
    }
}

void dobro (double numero[])
{
    int i;
    
    printf("\n Dobro \n");
    
    for (i = 0; i < MAX; ++i)
    {
        printf(" %.lf ", numero[i] * 2);
    }
}

void somatorio (double numero[])
{
    int i, soma = 0;
    
    printf("\n Somatório \n");
    
    for (i = 0; i < MAX; ++i)
    {
        soma += numero[i];
    }
    printf(" %d ", soma);
    
    printf("\n Média \n");
    printf(" %.2f ", (float) (soma / MAX));
}

void maior (double numero[])
{
    int i, num = numero[0];
    
    printf("\n Maior \n");
    
    for (i = 0; i < MAX; ++i)
    {
        if (num < numero[i])
        {
            num = numero[i];
        }
    }
    printf(" %d ", num);
}

void menor (double numero[])
{
    int i, num = numero[0];
    
    printf("\n Menor \n ");
    
    for (i = 0; i < MAX; ++i)
    {
        if (num > numero[i])
        {
            num = numero[i];
        }
    }
    printf("%d ", num);
}
int main(int argc, char** argv) 
{

    int i;
    double numero[MAX];
    
    for (i = 0; i < MAX; ++i)
    {
        printf("Introduza um numero: \n");
        scanf("%lf", &numero[i]);
        limparBufferEntrada();
    }
    
    conteudo(numero);
    dobro(numero);
    somatorio(numero);
    maior(numero);
    menor(numero);
    
    return (0);
}

