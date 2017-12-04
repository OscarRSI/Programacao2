
/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 16 de Outubro de 2017, 20:34
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    
    int C,F;

    printf("Introduza a temperatura em Fahrenheit:");
    scanf("%d",&F);
 
    C=(F - 32) * 5/9;

 
    printf("Temperatura em graus Centígrados = %.2d\n",C);

    return (0);
}

