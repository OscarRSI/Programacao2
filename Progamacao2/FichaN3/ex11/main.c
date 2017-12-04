/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 1 de Novembro de 2017, 11:40
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    
    int i, num, div; 

    printf("Introduza um numero ");
    scanf("%d", &num);
   
    for (i = 1; i <= num; i++) 
    {
        if (num % i == 0)
        { 
        div++;
        }
    }
    
     if (div == 2)
    {
        printf("O numero %d é primo!!", num);
    }else
     {
        printf("O numero %d não é primo!!", num);
     }
    
    return (0);
}

