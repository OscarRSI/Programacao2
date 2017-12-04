/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 26 de Outubro de 2017, 12:30
 */

#include <stdio.h>
#include <stdlib.h>
#define dist 130
#define combustivel 4
/*
 * 
 */
int main(int argc, char** argv) 
{
    int viagem;
    float reserva, velocidade_media,abastecimento;
    
    printf("Sr.Alcino quanto tempo vai durar a viagem? \n");
    scanf("%d",&viagem);
    
    velocidade_media = dist / (viagem / 60);    
    
    if (velocidade_media <= 60)
    {
        reserva = 5;
    }else if (velocidade_media > 60 && velocidade_media <= 120)
    {
        reserva = 6;    
    } else if (velocidade_media > 120)
    {
        reserva = 7;    
    }
    
    abastecimento = (combustivel * 100) / reserva;
    
    if (abastecimento >= 60 && abastecimento < 70)
   {
        printf("Tem de reabastercer na 1 bomba .\n");    
   }else if (abastecimento >= 70 && abastecimento < 79)
   {
        printf("Tem que reabastecer na 2 bomba .\n");    
   }else if (abastecimento >= 79 && abastecimento < 130)
   {
       printf("Tem que reabastecer na 3 bomba .\n");
   }else 
   {
       printf("Nao vai conseguir abastecer");
   }
return (0);
}

