 /* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 22 de Outubro de 2017, 22:03
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{

    int Numero;
    
    printf("Introduza o seu numero: ");
    scanf("%d",&Numero);
    
    if(Numero %5 == 0 && Numero %3 == 0)
    {
        printf("O numero %d vai ser divisivel por 3 e 5",Numero);    
    }else
    {
        printf("O numero %d nao vai ser divisivel por 3 e 5", Numero);    
    }
          
return (0);
}

