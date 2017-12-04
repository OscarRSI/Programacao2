/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 22 de Outubro de 2017, 20:13
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
 int Horario, Horaentrada, Horasaida, Minutoentrada, Minutosaida, Entrada, Saida;
    
 printf("Hora da sua entrada: ");
 scanf("%d",&Horaentrada);
 printf("Minutos da sua entrada: ");
 scanf("%d",&Minutoentrada);
 printf("Hora da sua saida: ");
 scanf("%d",&Horasaida);
 printf("Minutos da sua saida: ");
 scanf("%d",&Minutosaida);
 
 Entrada = (Horaentrada * 3600) + Minutoentrada;
 Saida = (Horasaida * 3600) + Minutosaida;
 Horario = Saida - Entrada;
 
 if (Horario < 0)
 {
    Horario = (24 * 3600) + Horario;    
 }
    printf("O funcionario trabalhou %.2d:%.2d", Horario / 3600, Horario % (3600 / 60));  
    
 return (0);
}

