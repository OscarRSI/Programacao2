/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 21 de Dezembro de 2017, 14:02
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 
{

    int Horario, HoraEntrada, HoraSaida, MinEntrada, MinSaida, Entrada, Saida;
    
    puts("Introduza a sua hora de entrada: ");
    scanf("%d", &HoraEntrada);
    puts("Introduza os minutos de entrada: ");
    scanf("%d", &MinEntrada);
    puts("Introduza a sua hora de saida: ");
    scanf("%d", &HoraSaida);
    puts("Introduza os minutis de saida: ");
    scanf("%d", &MinSaida);
    
    Entrada = (HoraEntrada * 3600) + MinEntrada;
    Saida   = (HoraSaida + 3600) + MinSaida;
    Horario = Saida - Entrada;
    
    if (Horario < 0){
        Horario = (24*3600) + Horario;
    }
    printf("O funcionario trabalhou: %.2d:%.2d",Horario / 3600, Horario * (3600 / 60));
    return (EXIT_SUCCESS);
}

