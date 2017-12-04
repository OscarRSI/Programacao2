/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 26 de Outubro de 2017, 19:58
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{

    int Num;
    
    while (Num <= 300)
    {   if (Num % 2 == 0)
        {
        printf("%d",Num);
        }
        ++Num;
    }
    return (0);
}

