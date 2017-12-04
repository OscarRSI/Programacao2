
/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 16 de Outubro de 2017, 19:04
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{

    float perimetro,area,a,pi;
    
    pi=3.1415;
    
    printf("Introduza a area e o perimetor de uma circunferencia:\n");
    printf("Introduza o raio: ");
    scanf("%f",&a);
    
    area=pi*(a, 2);
    perimetro=(2*pi) * a;
    
    
    printf("a area é: %.2f\n ",area);
    printf("o perimetro é: %.2f\n ",perimetro);

    return(0);
 }

