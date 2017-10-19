
/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 16 de Outubro de 2017, 20:09
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 
{
    float d,DL, anosluz;
    int segundoporano, velocidadedaluz;
    
    velocidadedaluz=300000;
    segundoporano=415782;
    anosluz=571234698;
    
    printf("Introduza a distanica em km: ");
    scanf("%f",&d);
    
    DL=d/anosluz;
    printf("O tempo que levaria é %0.10f anos luz ",DL);
    
    return (0);
}

