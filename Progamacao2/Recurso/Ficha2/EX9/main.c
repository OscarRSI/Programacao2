/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 21 de Dezembro de 2017, 14:19
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 
{
    int num;
    
    printf("Introduza o seu numero: ");
    scanf("%d", &num);
    
    if (num %2 == 0){
        printf("Numero %d Par",num);
    }else {
        printf("Numero %d Impar",num);
    }

    return (EXIT_SUCCESS);
}

