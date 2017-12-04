/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 8 de Novembro de 2017, 17:45
 */

#include <stdio.h>
#include <stdlib.h>
#define asterisco '*'

void asteriscos(int num){
    int i = 1;
    for(i = 1; i <= num; ++i){
        printf("%c ", asterisco);
    }
}

int main(int argc, char** argv) {
   
    int ast;

    printf ("Introduza o numero de (*) que quer colocar \n");
    scanf("%d", &ast);
    
    asteriscos(ast);
    
    return (0);
}

