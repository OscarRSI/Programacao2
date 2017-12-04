
/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 16 de Outubro de 2017, 18:26
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 
{
    float base,altura,a,p;
    
    printf("Introduza a base do retangulo: ");
    scanf("%f",&base);
    
    printf("Introduza a altura do retangulo: ");
    scanf("%f",&altura);
    
    a =(base*altura);
    p =(base*2)+(altura*2);
    
    printf("O perimetro do retangulo é: %.2f\n",p);
    printf("A area do retangulo é: %.2f\n",a);

    return (0);
}

