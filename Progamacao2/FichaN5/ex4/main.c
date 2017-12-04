
/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 12 de Novembro de 2017, 18:59
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void limparBufferEntrada() 
{
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int main(int argc, char** argv) 
{

    int i, total;
    double soma, media, numero, numeros[MAX];
    
    for (i = 0; i <= MAX; ++i)
    {
        printf("Introduza um valor (-1 para terminar): \n");
        scanf("%lf", &numero);
        limparBufferEntrada();
        
        if (numero != -1)
        {
            numeros[i] = numero;
            soma += numeros[i];
            ++total;
        }else
            {
            break;
            }
    }
    
    media = (float) (soma / total);
    printf("Media é %.2f", media);
    return (EXIT_SUCCESS);
}

