
/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 16 de Outubro de 2017, 20:41
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    float m, a, imc;
    
    printf("Introduza a sua massa: ");
    scanf("%f",&m);
    
    printf("Introduza a sua altura: ");
    scanf("%f",&a);
    
    imc=m/(a*a);
    
    printf("O seu imc é %.2f ", imc);
    return (0);
}

