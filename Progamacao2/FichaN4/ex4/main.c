/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 9 de Novembro de 2017, 12:24
 */

#include <stdio.h>
#include <stdlib.h>

float lernotas(int n) 
{
    int i;
    float soma = 0, notas;
    
    for (i = 1; i <= n; i++) 
    {
        printf("Introduza o valor da nota: \n");
        scanf("%f", &notas);
        soma += notas;
    }

    return soma;
}

float media(int notas, int i) 
{

    float media;
    
    media = (float) (notas / i);
    printf(" O valor da média é %.2f", media);
    
    return media;
}

int main(int argc, char** argv) 
{
    int n;
    float medias, notas;

    printf("Introduza o numero de notas: \n");
    scanf("%d", &n);

    notas = lernotas(n);
    medias = media(notas, n);
    
    return(0);
}

