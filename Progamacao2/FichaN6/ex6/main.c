/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 23 de Novembro de 2017, 13:41
 */

#include <stdio.h>
#include <string.h>
#include <string.h>
#include "utils.h"


int main(int argc, char** argv) 
{

    char cidade[STRING_MAX], caracter;
    
    printf("Cidade Favorita? \n");
    lerString(cidade, STRING_MAX);
    
    caracter = lerChar(caracter);
    CountChar(cidade, caracter);
    
    return (0);
}