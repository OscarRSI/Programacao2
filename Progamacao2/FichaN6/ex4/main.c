/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 23 de Novembro de 2017, 11:58
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"


int main(int argc, char** argv) 
{
    
    char cidade[STRING_MAX], Cidade[STRING_MAX];
    
    printf("Cidade Favorita? \n");
    lerString(cidade, STRING_MAX);
    
    strcpy (Cidade, cidade);
    
    puts("Cidade");
    puts(Cidade);

    return (EXIT_SUCCESS);
}

