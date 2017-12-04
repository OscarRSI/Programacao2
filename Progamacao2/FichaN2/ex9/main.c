/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 22 de Outubro de 2017, 21:57
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int Numero;
    
    printf("Introduza o seu numero: ");
    scanf("%d",&Numero);
    
    if(Numero %2 == 0)
    {
        printf("O seu numero é Par ",Numero);    
    }else
    {
        printf("O seu numero é Impar",Numero);    
    }
    
    return (0);
}

