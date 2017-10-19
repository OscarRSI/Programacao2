
/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 16 de Outubro de 2017, 19:28
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
    float base,altura,a;
        
    printf("Introduza a altura do trinagulo: ");
    scanf("%f",&altura);
    
    printf("Introduza a base do triangulo: ");
    scanf("%f",&base);
    
    a=(base*altura)/2;
    
    
    printf("a area é: %.2f\n ",a);
  
    return (0);
}

