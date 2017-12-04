/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 14 de Novembro de 2017, 18:00
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void limparBufferEntrada()
{
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void par (int numero[])
{
    int i; 
    
    printf("Numero pares : ");
    for (i = 0; i < MAX; ++i)
    {
        if (numero[i] % 2 == 0)
        {
            printf(" %d", numero[i]);
        }
    }
}

void impar ( int numero[])
{
    int i;
    
    printf("Numero inpares: ");
    {
        for (i = 0; i < MAX; ++i)
        {
            if (numero[i] % 2 != 0)
            {
                printf(" %d", numero[i]);
            }
        }
    }
}

int main(int argc, char** argv) 
{

    int i, numero[MAX];
    char operacao;
    
    for (i = 0; i < MAX; ++i)
    {
        printf("Introduza um numero:");
        scanf("%d", &numero[i]);
        limparBufferEntrada();
    }
    
    while(1)
    {
        printf("\n Verificar numeros pares (P) ou impares (I): ");
        scanf("%c", &operacao);
        limparBufferEntrada();
    
    
    if (operacao == 'P' || operacao == 'p')
    {
        par(numero);
        break;
    }else if (operacao == 'I' || operacao == 'i')
    {
        impar(numero);
        break;
    }else 
    {
        printf("Opção inválida");
    }
    } 
    return (0);
}

