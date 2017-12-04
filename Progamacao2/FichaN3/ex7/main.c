/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 29 de Outubro de 2017, 12:03
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    
    int Num, I;
    
    printf("Introduza um valor: ");
    scanf("%d",&Num);
    
    if(Num <= 0)
    {
        printf("Numero incorreto.");
    }else
    {
        for(I = Num; I >= 0; --I)
        {
            if(I % 2 != 0)
            {
                printf("%d ",I);
            }
        }
    }
    
    
    return (0);
}

