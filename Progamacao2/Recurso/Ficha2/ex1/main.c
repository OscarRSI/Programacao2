/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 14 de Dezembro de 2017, 13:48
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) 
{
    int Num1, Num2;
    
    printf("Introduza o seu numero: ");
    scanf("%d", &Num1);
    
    printf("Introduza o seu numero: ");
    scanf("%d", &Num2);
    
    if (Num1 > Num2)
    {
        printf("Numero maior %d", Num1);
    }else {
        printf("Numero maior %d", Num2);
    }

    return (0);
}

