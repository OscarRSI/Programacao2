/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 24 de Novembro de 2017, 18:01
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

int main(int argc, char** argv) 
{

    int i = 0, nome, apelido;
    char nome_completo [STRING_MAX];
    
    printf("Introduza o seu nome completo: \n " );
    lerString(nome_completo, STRING_MAX);
    
    apelido = lastIndex (' ', nome_completo, STRING_MAX);
    nome = strlen(nome_completo);
    
    printf("Nome \n");
    
    for (i = apelido; i < nome; ++i)
    {
        printf("%c", nome_completo[i]);
    }
    
    printf(" ");
    
    for (i = 0; i < apelido; ++i)
    {
        printf("%c", nome_completo[i]);
    }
    
    return (0);
}

