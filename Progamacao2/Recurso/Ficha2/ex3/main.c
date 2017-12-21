/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 14 de Dezembro de 2017, 14:01
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) 
{

    float Teste1, Teste2, Teste3, media = 0;
    
    printf("Introduza a nota do 1º teste. ");
    scanf("%f", &Teste1);
    printf("Introduza a nota do 2º teste. ");
    scanf("%f", &Teste2);
    printf("Introduza a nota do 3º teste. ");
    scanf("%f", &Teste3);
    
    media =  (Teste1 * 0.25) + (Teste2 * 0.35) + (Teste3 * 0.45);
    printf("A média dos testes é %.2f \n", media);
    
    if (media >= 9.5) {
        printf("Aprovado");
    }else {
        printf("Reprovado");
    }
    return (0);
}

