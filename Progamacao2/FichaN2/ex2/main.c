/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 22 de Outubro de 2017, 17:16
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
    scanf("%d",&Num1);
    printf("Introduza o seu numero: ");
    scanf("%d",&Num2);
    
    if (Num1>Num2)
    {
        printf("Ordem decrescente: %d, %d.",Num1,Num2);   
    }else
    {
        printf("Ordem decrescente: %d, %d.",Num1,Num2);   
    }
    
    return (0);
}

