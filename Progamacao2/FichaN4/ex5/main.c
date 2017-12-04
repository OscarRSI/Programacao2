/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 9 de Novembro de 2017, 14:36
 */

#include <stdio.h>
#include <stdlib.h>

void fatorial (int num) 
{
     
   int i;
   
   for(i = 1; num > 1; num = num - 1)
   i = i * num;
   printf("O numero fatorial calculado é: %d", i); 
}

int main(int argc, char** argv) {

    int num;
    
    printf("Introduza um numero: \n");
    scanf("%d", &num);

    fatorial(num);
    
    return (0);
}

