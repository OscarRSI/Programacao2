/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 8 de Novembro de 2017, 21:43
 */

#include <stdio.h>
#include <stdlib.h>
#define EPD 1.16042
#define DPE 0.86166

char lerchar() 
{
    char c;
    printf("Tecla (e) para converter dolares para euros ou Tecla (d) para converter euros para dolares: \n");
    scanf(" %c", &c);
    return c;
}

double lerdouble() 
{
    double valor;
    printf("Introduza o valor: \n");
    scanf("%lf", &valor);
    return valor;
}

void conversao(double valor, char c) 
{

    if (c == 'e') 
    {
        printf("O valor e %.1lf ", valor * EPD);
        
    } else if (c == 'd') 
    {
        printf("O valor e %.1lf ", valor * DPE);

    } else 
    {
        printf("codigo invalido");
    }

}

int main(int argc, char** argv) 
{

    double valor;
    char c;
    
    valor = lerdouble();
    c = lerchar();
    conversao(valor, c);

    return (0);
}

