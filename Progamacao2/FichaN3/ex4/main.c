/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 26 de Outubro de 2017, 21:15
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int Num, Soma;
    
    for(Num = 1; Num <= 100; ++Num)
    {
        printf("%d \n",Num);
        Soma += Num;
    } 
    printf("O valor do somatorio é %d",Soma);
    return (0);
}

