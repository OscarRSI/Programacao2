
/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 16 de Outubro de 2017, 21:17
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float nota1, nota2, nota3, media;
    
    puts("Valores de 0 a 20\n");
    printf("Introduza um numero:");
    scanf("%f", &nota1);

    printf("Introduza um numero:");
    scanf("%f", &nota2);

    printf("Introduza um numero:");
    scanf("%f", &nota3);

    media =(nota1 *0.25) + (nota2 *0.35) + (nota3 *0.40) / 3;

    printf("A media vai ser : %f\n ", media);
    return (0);
}

