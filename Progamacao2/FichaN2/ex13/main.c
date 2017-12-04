/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 23 de Outubro de 2017, 22:14
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int TemperaturaIdeal, TemperaturaAtual;
    float DiferenciaTempo;
    
    printf("Qual a tempratura atual: ");
    scanf("%d",&TemperaturaAtual);
    printf("Qual a temperatura ideal: ");
    scanf("%d",&TemperaturaIdeal);
    
    if (TemperaturaIdeal < TemperaturaAtual)
    {
        DiferenciaTempo= (float) TemperaturaAtual - TemperaturaIdeal;
        printf("Até reduzir para a temperatura ideal é necessario %.fsegundos",DiferenciaTempo  *   120);
    }
    if(TemperaturaIdeal > TemperaturaAtual)
    {
        DiferenciaTempo = (float) TemperaturaIdeal - TemperaturaAtual;
        printf("Para aumentar ate a temperatura ideal é necessario %.fsegundos",DiferenciaTempo * 180);
    }
    return (0);
}

