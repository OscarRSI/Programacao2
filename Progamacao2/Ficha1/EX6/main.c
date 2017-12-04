
/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 16 de Outubro de 2017, 19:55
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 
{
    int num, antecessor, sucessor;
    
    printf("Introduza o numero Inteiro: ");
    scanf("%d", &num);
    
    sucessor = num + 1;
    antecessor =num - 1;
    
    printf("Numero antecessor é: %d\n",antecessor);
    printf("Numero sucessor é: %d\n",sucessor);
    
    return (0);
}

