/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 22 de Outubro de 2017, 17:42
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int Num1,Num2,Num3;
    
    printf("Introduza o seu numero: ");
    scanf("%d",&Num1);
    printf("Introduza o seu numero: ");
    scanf("%d",&Num2);
    printf("Introduza o seu numero: ");
    scanf("%d",&Num3);
    
    if (Num1 > Num2 && Num2 > Num3)
    {
        printf("O menor é %d",Num3);   
    }else if (Num2 > Num1 && Num3 > Num1)
    {
        printf("O menor é %d",Num1);    
    }else
    {
        printf("O menor é %d",Num2);    
    }
    
    return (0);
}

