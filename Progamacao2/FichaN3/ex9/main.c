/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 29 de Outubro de 2017, 14:38
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    
    int Num, Resultado = 0;
    
    printf("Introduza a tabuada que deseja: ");
    scanf("%d",&Num);
    
    for(Resultado = 0; Resultado <= 10; Resultado++);
    {
        printf("%d x %d = %d \n",Num,Resultado,Num * Resultado);
    }

    return (0);
}

