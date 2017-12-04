/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 23 de Novembro de 2017, 12:13
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

int main(int argc, char** argv) 
{
    char cidade[STRING_MAX];
    int caracteres = 0;
    
    printf("Cidade Favorita? \n");
    lerString(cidade, STRING_MAX);
    
    caracteres = strlen (cidade);
    
    printf("A palavra %s tem %d caracteres.", cidade, caracteres);
    
    return (0);
}

