/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 23 de Novembro de 2017, 10:47
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

int main(int argc, char** argv) 
{

    char cidade[STRING_MAX], pais[STRING_MAX];
    int OrdemAlfabetica;
    
    printf("Cidade Favorita? \n");
    lerString(cidade, STRING_MAX);
    
    printf("País da cidade? \n");
    lerString(pais, STRING_MAX);
    
    OrdemAlfabetica = strcmp (cidade, pais);
    
    printf("Ordem Alfabétcica: \n");
    if (OrdemAlfabetica < 0)
    {
        puts(cidade );
        puts(pais );
    }else
      {
        puts(pais);
        puts(cidade);
      }
    
    return (0);
}

