/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 22 de Outubro de 2017, 17:28
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    float Teste1, Teste2, Teste3, Media;
    
    printf("Nota do seu primeiro teste: ");
    scanf("%f",&Teste1);
    printf("Nota do seu segundo teste: ");
    scanf("%f",&Teste2);
    printf("Nota do seu terceiro teste: ");
    scanf("%f",&Teste3);
    
    Media = (Teste1 * 0.25) + (Teste2 * 0.35) + (Teste3 * 0.40);
    printf("Media dos teste: %.2f \n", Media);
    
    if (Media >= 9.5)
    {
        printf("Aluno aprovado.");
    }else
    {
        printf("Aluno reprovado.");   
    }
    
    return (0);
}

