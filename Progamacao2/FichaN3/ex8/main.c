/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 29 de Outubro de 2017, 14:03
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{

    int Num, Par, I;
    
    printf("Introduza quantos pares pretende: ");
    scanf("%d",&Num);
    
    while (Par <= Num - 1)
    {
        if(I % 2 == 0)
        {
            printf("%d ",I);
            Par += 1;
        }
       ++I;
    }
    return (0);
}

