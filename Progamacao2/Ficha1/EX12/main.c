
/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 17 de Outubro de 2017, 15:52
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int horas, minutos, segundos;
    
    printf("Introduza o seu numero de segundos:");
    scanf("%d", &segundos);
    
    horas=segundos /3600;
   
    minutos=segundos /60;
   
    
    printf("O numero de segundos em\n H:%d  em M:%d e em S:%d", horas, minutos, segundos);
   
    
    return (0);
}

