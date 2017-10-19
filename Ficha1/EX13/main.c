
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
    float m1, m2, m3, m4, m5, s1, s2, s3, s4, s5;
    float a, segtotal_1, b, segtotal_2, c, segtotal_3, d, segtotal_4, e, segtotal_5;
    seghoras = 3600;

    printf("Introduza o tempo da sua musica\n");
    printf("Minutos: ");
    scanf("%f", &m1);
    printf("Segundos: ");
    scanf("%f", &s1);
    a = m1 * 60;
    segtotal_1 = a + s1;

    printf("Introduza o tempo da sua musica\n");
    printf("Minutos: ");
    scanf("%f", &m2);
    printf("Segundos: ");
    scanf("%f", &s2);
    b = m2 * 60;
    segtotal_2 = b + s2;

    printf("Introduza o tempo da sua musica\n");
    printf("Minutos: ");
    scanf("%f", &m3);
    printf("Segundos: ");
    scanf("%f", &s3);
    c = m3 * 60;
    segtotal_3 = c + s3;

    printf("Introduza o tempo da sua musica\n");
    printf("Minutos: ");
    scanf("%f", &m4);
    printf("Segundos: ");
    scanf("%f", &s4);
    d = m4 * 60;
    segtotal_4 = d + s4;

    printf("Introduza o tempo da sua musica\n");
    printf("Minutos: ");
    scanf("%f", &m5);
    printf("Segundos: ");
    scanf("%f", &s5);
    e = m5 * 60;
    segtotal_5 = e + s5;

    segtotais = segtotal_1 + segtotal_2 + segtotal_3 + segtotal_4 + segtotal_5;

    horas = segtotais / seghoras;
    minutos = (segtotais - (seghoras * horas)) / 60;
    segundos = segtotais - (seghoras * horas) - (minutos * 60);

    printf("O seu álbum tem a duração de %dH : %dM : %dS", horas, minutos, segundos);
    return (0);
}

