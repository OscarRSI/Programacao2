
/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 16 de Outubro de 2017, 21:05
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    float num1, num2, num3, num4, num5, media;

    printf("Introduza um numero:");
    scanf("%f", &num1);

    printf("Introduza um numero:");
    scanf("%f", &num2);

    printf("Introduza um numero:");
    scanf("%f", &num3);

    printf("Introduza um numero:");
    scanf("%f", &num4);

    printf("Introduza um numero:");
    scanf("%f", &num5);

    media = (num1 + num2 + num3 + num4 + num5) / 5;

    printf("A media vai ser : %f\n ",  media);
    
     return (0);
}

