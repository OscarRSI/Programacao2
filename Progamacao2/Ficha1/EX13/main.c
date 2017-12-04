
/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 17 de Outubro de 2017, 17:44
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    
    int seghoras, segtotais, horas, segundos, minutos;
    float Minuto1, Minuto2, Minuto3, Minuto4, Minuto5, Segundo1, Segundo2, Segundo3, Segundo4, Segundo5;
    float A, segtotal_1, B, segtotal_2, C, segtotal_3, D, segtotal_4, E, segtotal_5;
    seghoras = 3600;

    printf("Introduza o tempo da sua musica\n");
    printf("Minutos: ");
    scanf("%f", &Minuto1);
    printf("Segundos: ");
    scanf("%f", &Segundo1);
    A = Minuto1 * 60;
    segtotal_1 = a + Segundo1;

    printf("Introduza o tempo da sua musica\n");
    printf("Minutos: ");
    scanf("%f", &Minuto2);
    printf("Segundos: ");
    scanf("%f", &Segundo2);
    B = Minuto2 * 60;
    segtotal_2 = b + Segundo2;

    printf("Introduza o tempo da sua musica\n");
    printf("Minutos: ");
    scanf("%f", &Minuto3);
    printf("Segundos: ");
    scanf("%f", &Segundo3);
    C = Minuto3 * 60;
    segtotal_3 = c + Segundo3;

    printf("Introduza o tempo da sua musica\n");
    printf("Minutos: ");
    scanf("%f", &Minuto4);
    printf("Segundos: ");
    scanf("%f", &Segundo4);
    D = Minuto4 * 60;
    segtotal_4 = d + Segundo4;

    printf("Introduza o tempo da sua musica\n");
    printf("Minutos: ");
    scanf("%f", &Minuto5);
    printf("Segundos: ");
    scanf("%f", &Segundo5);
    E = Minuto5 * 60;
    segtotal_5 = e + Segundo5;

    segtotais = segtotal_1 + segtotal_2 + segtotal_3 + segtotal_4 + segtotal_5;

    horas = segtotais / seghoras;
    minutos = (segtotais - (seghoras * horas)) / 60;
    segundos = segtotais - (seghoras * horas) - (minutos * 60);

    printf("O seu álbum tem a duração de %dH : %dM : %dS", horas, minutos, segundos);
    return (0);
}

