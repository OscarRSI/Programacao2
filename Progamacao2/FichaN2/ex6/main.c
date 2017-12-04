 /* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 22 de Outubro de 2017, 19:37
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int Hora,Minutos;
    
    printf("Introduza a sua hora: ");
    scanf("%d",&Hora);
    printf("Introduza os seus minutos: ");
    scanf("%d",&Minutos);
    
    if (Hora == 0)
    {
        Hora == 12;
        printf("A sua hora é %d:%d",Hora,Minutos);
    }else if (Hora > 12)
    {
        Hora = Hora - 12;
        printf("A sua hora é %d:%d",Hora,Minutos);
    }else if (Hora == 12)
    {
        printf("A sua hora é %d:%d",Hora,Minutos);    
    }else
    {
        printf("A sua hora é %d:%d",Hora,Minutos);    
    }
    return (0);
}

