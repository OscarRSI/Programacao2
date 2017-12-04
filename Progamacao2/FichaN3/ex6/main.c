/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 29 de Outubro de 2017, 11:44
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    
    int Limite, Salto, Num = 0;
    
    printf("Introduza o seu limite: ");
    scanf("%d", &Limite);
    
    printf("Introduza o seu salto: ");
    scanf("%d", &Salto);
    
    for (Num = 0; Num <= Limite; ++Num)
    {
        if(Num % Salto == 0)
        {
            printf("%d ", Num);
        }
    }
    return (0);
}

