/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 22 de Outubro de 2017, 19:52
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
    printf("Introduza o seu segundo numero: ");
    scanf("%d",&Num2);
    printf("Introduza o seu terceiro numero: ");
    scanf("%d",&Num3);
    
    if (Num1 > Num2 && Num2 > Num3)
    {
        printf("A ordem crescente vai ser: %d %d %d",Num3,Num2,Num1);
    }else if(Num1 > Num3 && Num3 > Num2)
    {
        printf("A ordem crescente vai ser: %d %d %d",Num2,Num3,Num1);    
    }else if(Num2 > Num3 && Num3 > Num1)
    {
        printf("A ordem crescente vai ser: %d %d %d",Num1,Num3,Num2);    
    }else if(Num2 > Num1 && Num1 > Num3)
    {
        printf("A ordem crescente vai ser: %d %d %d",Num3,Num1,Num2);    
    }else if(Num3 > Num2 && Num2 > Num1)
    {
        printf("A ordem crescente vai ser: %d %d %d",Num1,Num2,Num3);    
    }else 
    {
        printf("A ordem crescente vai ser: %d %d %d",Num2,Num1,Num3);   
    }
    
    return (0);
}