/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 23 de Novembro de 2017, 10:29
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

int main(int argc, char** argv) 
{

    char cidade[STRING_MAX];
    
    printf("Qual a sua cidade favorita? \n");
    
    lerString (cidade, STRING_MAX);
    
    printf("Cidade Favorita: %s",cidade);
    
    return (0);
}

