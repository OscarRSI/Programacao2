
/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 17 de Outubro de 2017, 23:59
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 
{
  
    int QuantCombustivel;
    float HoraPartida, HoraChegada, MinPartida, MinChegada;
    float ConCombustivel, VelMedia, TempViagem, DistPercorrida;
    
    printf("Introduza a quantidade de combustivel gasto: ");
    scanf("%d",QuantCombustivel);
    printf("Introduza a sua hora e minutos de partida: ");
    scanf("%f%f",HoraPartida, MinPartida);
    printf("Introduza a sua hora e minutos de chegada: ");
    scanf("%f%f",HoraPartida, MinChegada);
    printf("Introduza a sua distancia percorrida: ");
    scanf("%f",DistPercorrida);
    
    TempViagem = (HoraChegada + MinChegada) - (HoraPartida - MinPartida);
    VelMedia =  DistPercorrida / TempViagem;
    ConCombustivel = QuantCombustivel /DistPercorrida;
    
    return (0);
}

