/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 14 de Dezembro de 2017, 13:57
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
    
    if (Num1>Num2){
        printf("A ordem é %d %d. ",Num1, Num2);
    }else {
        printf("A ordem é %d %d. ",Num2, Num1);
    }
    return (0);
}

