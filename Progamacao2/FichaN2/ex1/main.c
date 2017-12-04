/* 
 * File:   main.c
 * Author: Oscar
 * Created on 22 de Outubro de 2017, 14:20
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int Num1, Num2;
    
    printf("Introduza o seu numero: ");
    scanf("%d", &Num1);
    
    printf("Introduza o seu numero: ");
    scanf("%d", &Num2);
    
    if (Num1 > Num2)
    {
        printf("O maior numero é %d. ", Num1);   
    }else
    {
        printf("O maior numero é %d. ", Num2);
    }    
    
    return (0);
}

