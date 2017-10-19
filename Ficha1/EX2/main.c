
/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 16 de Outubro de 2017, 17:59
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
    int num1, num2;
    int resultado;
    int mult;
    
    printf("Introduza o numero 1: ") ;
    scanf("%d",&num1);
    
    printf("Introdaza o numero 2: ") ;
    scanf("%d",&num2);
    
    resultado = num1 - num2;
    mult = resultado * num1;
    
    printf("O valor do resulta de %d e %d é %d\nA multiplicação de %d e %d é %d: ",num1,num2,resultado,resultado,num1,mult);
    
    return 0;
}


