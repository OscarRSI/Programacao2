/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 29 de Outubro de 2017, 15:19
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int i, j;
    
    for  (i = 1; i <= 10; i = i + 1)
    {
        for (j = 1; j <= 10; j = j + 1)
        {
            printf("%2d x %2d = %3d \n", i, j, i * j);
        }    
    }
 
    return (0);
}

