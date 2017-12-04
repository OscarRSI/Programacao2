/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 23 de Novembro de 2017, 15:09
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"



int main(int argc, char** argv) 
{

    char nomecompleto[STRING_MAX];
    int tamanho;
    
    printf("Introduza o seu nome completo? \n");
    lerString (nomecompleto, STRING_MAX);
    
    tamanho = strlen(nomecompleto);
    countchar (nomecompleto, tamanho);
    
    
    return (0);
}

