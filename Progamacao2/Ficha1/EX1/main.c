/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 20 de Outubro de 2017, 20:18
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int Numero1, Numero2, Soma;
    
    printf("Introduza o seu primeiro numero: \n");
    scanf("%d",&Numero1);
    printf("Introduza o seu segundo numero: \n");
    scanf("%d",&Numero2);
    Soma=Numero1+Numero2;
    printf("O seu resultado é: %d",Soma);
    
    return (EXIT_SUCCESS);
}

