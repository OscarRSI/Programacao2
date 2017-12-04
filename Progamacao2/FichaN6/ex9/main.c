/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 24 de Novembro de 2017, 18:36
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

int main(int argc, char** argv) 
{

    char virgula[2] = VIRGULA, primeironome[STRING_MAX], ultimonome[STRING_MAX];
    
    printf("Introduza o seu primeiro nome: \n");
    lerString(primeironome,STRING_MAX);
    
    printf("Introduza o seu ultimo nome: \n");
    lerString(ultimonome, STRING_MAX);
    
    strcat (primeironome, virgula);
    strcat (primeironome, ultimonome);
    
    printf ("%s", primeironome);
    
    return (EXIT_SUCCESS);
}

