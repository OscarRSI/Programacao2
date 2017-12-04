/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 23 de Outubro de 2017, 18:45
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{

    int X, Y;
    
    printf("Introduza o valor do X: ");
    scanf("%d",&X);
    
    if ( X < 1)
    {
        Y = X;
        printf("O valor do seu Y é: %d ",Y);
    }else if( X == 1)
    {
        Y = 0;
        printf("O valor so seu Y é: %d ",Y);
    }else
    {
        Y= 2 * X;    
        printf("O valor do seu Y é: %d ",Y);
    }
    
    return (0);
}

