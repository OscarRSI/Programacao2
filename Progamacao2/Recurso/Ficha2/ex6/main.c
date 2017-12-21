/* 
 * File:   main.c
 * Author: Oscar
 *
 * Created on 14 de Dezembro de 2017, 14:38
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 
{

    int hora, minutos;
    
    printf("Introduza a sua Hora: ");
    scanf("%d", &hora);
    printf("Introduza os seus minutos: ");
    scanf("%d", &minutos);
    
    if (hora == 0){
        
        hora == 12;
        printf("A sua hora é %d:%d ", hora, minutos);
    }else if (hora > 12){
        
        hora = hora - 12;
        printf("A sua hora é %d:%d ", hora, minutos);
    }else if (hora == 12){
        
        printf("A sua hora é %d:%d ", hora, minutos);
    }else {
        
        printf("A sua hora é %d:%d ", hora, minutos);
    }
    
    return (0);
}

