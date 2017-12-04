/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 12 de Novembro de 2017, 15:41
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM_ARRAY 26

int main(int argc, char** argv) 
{
    int i, vetor[TAM_ARRAY];
    
    for(i = 5; i < TAM_ARRAY; ++i)
    {
        vetor[i] = i;
        printf(" %d ", vetor[i]);
    }

    return (EXIT_SUCCESS);
}

