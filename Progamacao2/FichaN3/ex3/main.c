/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 26 de Outubro de 2017, 20:11
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{

  int inicio, fim, num;
    
    printf("Inicio ");
    scanf("%d", &inicio);
    
    printf ("Fim ");
    scanf("%d", &fim);
    
    for(num = inicio + 1; num <= fim - 1; ++num)
    {
        printf("%d ", num); 
    }
    
    return (0);
}

