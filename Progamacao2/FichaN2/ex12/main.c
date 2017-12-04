/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 23 de Outubro de 2017, 19:29
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{    
    int X, Y;
    printf ("Introduza o seu valor de X: ");
    scanf("%d", &X); 
    printf ("Introduza o seu valor de Y: ");
    scanf("%d", &Y);
    
    if ( Y == 0 && Y ==0 )
    {
        printf("Ponto de origem ");
    
    }
    if ( X == 0 && Y > 0)
    {
        printf("Vai estar sobre o eixo X ");
    }
    if ( X > 0 && Y == 0)
    {
        printf("Vai estar sobre o eixo Y. ");
    }
    if ( X > 0 && Y > 0)
    {
        printf ("Vai estar no 1º Quandrante \n");
    }else if ( X < 0 && Y > 0)
    {
        printf ("Vai estar no 4º Quandrante \n");
    }else if ( X < 0 && Y < 0)
    {
        printf ("Vai estar no 3º Quandrante \n");
    }else if ( X > 0 && Y < 0)
    {
        printf ("Vai estar no 2º Quandrante \n");
    }        
return (0);
}

