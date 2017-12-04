/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 27 de Outubro de 2017, 19:14
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{

     int Num, i = 0;
    
    printf("Introduza o seu numero: ");
    scanf("%d", &Num);
    
    for (i = Num - 1; i >= Num - 5; --i){
        printf(" %d", i);
    }
    
    for (i = Num + 1; i <= Num + 5; ++i){
        printf(" %d", i);
    }
    return (0);
}

